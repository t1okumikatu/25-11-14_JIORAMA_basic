#include <esp_now.h>
#include <WiFi.h>
#include "src/constant.h"
// === 受信コールバック ===incomingDataをrecvDataに
void OnDataRecv(const esp_now_recv_info *info, const uint8_t *incomingData, int len) {
  memcpy(&recvData, incomingData, sizeof(recvData));
  Serial.println("recvVoltage  ");
  Serial.println(recvData.voltage, 2);
  sendData.newvoltage=recvData.voltage;
  //Serial.println(" V");;
}
// === 送信完了コールバック ===
void OnDataSent(const wifi_tx_info_t *info, esp_now_send_status_t status) {
  //Serial.print("Send Status: ");
  //Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Success" : "Fail");
}
void setup() {
  Serial.begin(115200);
  delay(1000);
  APSTA();
  TrainNowpeer();
  }

void loop() {
  // 定期的にコマンド送信（1秒ごと）
  
  static unsigned long prevMillis = 0;
  if (millis() - prevMillis > 300) {
    prevMillis = millis();
    sendData.newvoltage=recvData.voltage;
    //sendData.newvoltage = 1;  // 1 = 前進コマンド（任意）
    esp_err_t result = esp_now_send(trainAddress, (uint8_t *)&sendData, sizeof(sendData));
    //Serial.println(result == ESP_OK ? "[newSend] OK" : "[Send] FAIL");
    Serial.println("newvoltage  ");
    Serial.println(recvData.voltage, 2);
  }
  delay(2000);
}
