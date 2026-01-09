#include <esp_now.h>
#include <WiFi.h>
#include "constant.h"
void onReceive(const esp_now_recv_info *info,
               const uint8_t *Data,
               int len) {

  int rssi = info->rx_ctrl->rssi;

  char macStr[18];
  snprintf(macStr, sizeof(macStr),
           "%02X:%02X:%02X:%02X:%02X:%02X",
           info->src_addr[0], info->src_addr[1], info->src_addr[2],
           info->src_addr[3], info->src_addr[4], info->src_addr[5]);

  Serial.print("受信バイト数 = ");
  Serial.println(len);

  for (int i = 0; i < len; i++) {
    Serial.print(Data[i]);
    Serial.print(",");
  }
  Serial.println();
/*
  Serial.print("送信MAC: ");
  //Serial.print(macStr);
  Serial.print(" | RSSI: ");
  //Serial.print(rssi);
  Serial.println(" dBm");
*/
  // ★ パケットチェック
  if (len == 30 && Data[0] == 99 && Data[29] == 88) {
    Send1 = Data[1];
    FB_Light = Data[2];

    Serial.println("✔ 正常パケット受信");
    if (Send1>0){
    forward(Send1*4);
  }
  if (Send1==0){
    brake();
  }
  }
// ===== 受信コールバック =====
/*
void OnDataRecv(const esp_now_recv_info *info, const uint8_t *incomingData, int len) {
  memcpy(&recvData, incomingData, sizeof(recvData));
  Serial.println("recv.newvoltage");
  Serial.println(recvData.newvoltage);
  switch (recvData.flag) {
    case 0: Serial.println("停止");
    brake(); break;
    case 1: Serial.println("前進"); 
    forward(170);break;
    case 2: Serial.println("後退"); 
    reverse(150); break;
    default: break;
  }
}
*/
               }
// ===== 送信完了コールバック =====
void OnDataSent(const wifi_tx_info_t *info, esp_now_send_status_t status) {
  //Serial.print("Send Status: ");
  //Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Success" : "Fail");
}
void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(in1, OUTPUT);  // IN1
  pinMode(in2, OUTPUT);  // IN2
  ledcAttachChannel(in1, freq, resolution,ch1);
  ledcAttachChannel(in2, freq, resolution,ch2);
  APSTA();
  StatiNowpeer();
  }
void loop() {
  
  //readV();
  //delay(20);
}

