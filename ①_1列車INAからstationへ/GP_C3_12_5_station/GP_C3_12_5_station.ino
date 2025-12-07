#include <esp_now.h>
#include <WiFi.h>

// 受信 float 配列
float recvData[5];

// ===== 受信コールバック =====
void OnDataRecv(const esp_now_recv_info *info, const uint8_t *incomingData, int len) {
  if (len == sizeof(recvData)) {
    memcpy(recvData, incomingData, len);
    Serial.print("len = ");
    Serial.println(len);

    //Serial.println(recvData[0],2); // shunt
    //Serial.println(recvData[1],2); // bus
    Serial.println(recvData[2],2); // current
    //Serial.println(recvData[3],2); // power
    Serial.println(recvData[4],2); // load
  } else {
    //Serial.println("サイズエラー");
  }
}

void setup() {
  Serial.begin(115200);
  APSTA();

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed!");
    return;
  }

  esp_now_register_recv_cb(OnDataRecv);

  Serial.println("Station Ready! (Waiting Train...)");
}

void loop() {
  delay(50);
}
