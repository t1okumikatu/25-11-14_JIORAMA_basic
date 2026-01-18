#include <WiFi.h>
#include <esp_now.h>

uint8_t broadcastAddress[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

uint8_t data[30] = {
  99,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,88
};

void OnDataSent(const wifi_tx_info_t *info, esp_now_send_status_t status) {
  // NULL安全
  if (info == NULL) return;

  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Send OK" : "Send FAIL");
}

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed");
    return;
  }

  esp_now_register_send_cb(OnDataSent);//関数呼ぶ
//============通信相手情報
  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
//=============
  peerInfo.channel = 0;
  peerInfo.encrypt = false;
//-----------------通信相手登録
  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Add peer failed");
    return;
  }
//------------------
}

void loop() {
  esp_now_send(broadcastAddress, data, sizeof(data));
  delay(500);
}
