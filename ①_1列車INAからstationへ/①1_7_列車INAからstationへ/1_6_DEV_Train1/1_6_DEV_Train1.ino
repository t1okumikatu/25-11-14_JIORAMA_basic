#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
// 受信データ格納用（送信側と同じサイズ）
uint8_t recvData[26];

// =====================
// 受信コールバック
// =====================
void onReceive(const esp_now_recv_info *info,
               const uint8_t *data,
               int len) {
//ESP-NOWでデータを受信した瞬間に自動で呼ばれる関数です
//（自分で呼ぶ関数ではありません）
  Serial.print("From MAC: ");
  for (int i = 0; i < 6; i++) {
    Serial.printf("%02X", info->src_addr[i]);
    if (i < 5) Serial.print(":");
  }

  Serial.print("  RSSI: ");
  Serial.print(info->rx_ctrl->rssi);
  Serial.print(" dBm");

  Serial.print("  Length: ");
  Serial.println(len);

  // サイズチェック
  if (len == sizeof(recvData)) {
    memcpy(recvData, data, len);

    Serial.print("DATA: ");
    for (int i = 0; i < 26; i++) {
      Serial.print(recvData[i]);
      Serial.print(" ");
    }
    Serial.println();
  } else {
    Serial.println("Data size mismatch");
  }

  Serial.println("-------------------------");
}

// =====================
// SETUP
// =====================
void setup() {
  Serial.begin(115200);
  APSTA();
  // ★ 送信側と同じ ch1 に固定
  esp_wifi_set_channel(6, WIFI_SECOND_CHAN_NONE);

  Serial.print("My MAC: ");
  Serial.println(WiFi.macAddress());
delay(10000);
  // ESP-NOW 初期化
  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed");
    return;
  }

  // 受信コールバック登録
  esp_now_register_recv_cb(onReceive);//ESP-NOWの受信処理を有効化して、「受信待ち状態になった」ことを示すコードです。
  Serial.println("ESP-NOW Receiver Ready");
  delay(10000);
}

// =====================
// LOOP
// =====================
void loop() {
  // 受信は割り込みなので何もしない
  Serial.print("My MAC: ");
  Serial.println(WiFi.macAddress());
  Serial.print("WiFi Channel: ");
  Serial.println(WiFi.channel());
  delay(1000);
}
