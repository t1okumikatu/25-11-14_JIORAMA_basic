#include <WiFi.h>
#include <esp_now.h>
#include <esp_wifi.h>
#include "SPIFFS.h"
#include "constant.h"
// ===== 送信完了コールバック =====
void onSent(const wifi_tx_info_t *info, esp_now_send_status_t status) {
  Serial.print("Send status: ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "SUCCESS" : "FAIL");
}

void setup() {
  unsigned long nowTime = millis(); 
  setup_servo();
  Serial.begin(115200);
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
   // SPIFFSのセットアップ
  if(!SPIFFS.begin(true)){
    Serial.println(F("An Error has occurred while mounting SPIFFS"));
    return;
  }
  // ① STAモード
  WiFi.mode(WIFI_STA);
  delay(100);

  // ② WiFi 明示 start（超重要）
  esp_wifi_start();
  delay(100);

  // ③ チャンネル固定（ESP-NOW前）
  esp_wifi_set_channel(6, WIFI_SECOND_CHAN_NONE);

  // ④ 現在チャンネル確認
  uint8_t ch;
  wifi_second_chan_t sch;
  esp_wifi_get_channel(&ch, &sch);
  Serial.print("Current WiFi Channel: ");
  Serial.println(ch);
  Serial.print("Second WiFi Channel: ");
  Serial.println(sch);

  // ⑤ MAC確認
  Serial.print("Sender MAC: ");
  Serial.println(WiFi.macAddress());

  // ⑥ ESP-NOW init
  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed");
    return;
  }

  esp_now_register_send_cb(onSent);

  // ⑦ Broadcast peer 登録
  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 6;   // home channelと一致必須
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Add broadcast peer failed");
    return;
  }

  Serial.println("ESP-NOW Broadcast Sender Ready");
  guide();
  compete_G();
  Receive();
  Broad();
  setup_servo();
  START_SW();
}

void loop() {
  compete_G();
  Receive();
  Broad();
  start_compete();
  OUT_19_PE3 ();
  IN_18_PE1 ();
  STOP();
  Serialprint2();
  //Serialprint();
  if(data[0] == 99 && data[29] == 88){
   esp_err_t result = esp_now_send(broadcastAddress, data, sizeof(data));
  if (result != ESP_OK) {
    Serial.println("Send error");
  }
  } 
  delay(1);
}
