#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include "constant.h"


/* ===================== SETUP ===================== */
void setup() {
  Serial.begin(115200);
  APSTA();
  // PWMピンをチャンネルに割り当て
  ledcAttachChannel(in1, PWM_FREQ, PWM_RES, CH_IN1);
  ledcAttachChannel(in2, PWM_FREQ, PWM_RES, CH_IN2);
  recvNowpeer();
  
}

/* ===================== LOOP ===================== */
void loop() {
// 受信は割り込みなので何もしない

  //Serial.print("My MAC: ");
  //Serial.println(WiFi.macAddress());
  //Serial.print("WiFi Channel: ");
  //Serial.println(WiFi.channel());
  Serial.print("Send1: ");
  Serial.println(Send1);
  delay(500);
  
}
