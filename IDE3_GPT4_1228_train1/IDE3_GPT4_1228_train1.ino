#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include "constant.h"

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(in1, OUTPUT);  // IN1
  pinMode(in2, OUTPUT);  // IN2
  ledcAttachChannel(in1, freq, resolution,ch1);
  ledcAttachChannel(in2, freq, resolution,ch2);
  APSTA();
  recvNowpeer();
  }
void loop() {
  
  //readV();
  delay(20);
}

