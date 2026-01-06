#include <esp_now.h>
#include <WiFi.h>
#include "constant.h"


void setup() {
  Serial.begin(115200);
  APSTA();
  nowpeer();
}

void loop() {
  readV();
  Serial.print("WiFi Channel: ");
  Serial.println(WiFi.channel());
  delay(1000);
}
