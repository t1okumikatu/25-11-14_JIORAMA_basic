#include <WiFi.h>
#include "constant.h"


void setup() {
  Serial.begin(115200);
  PMD();
  //PMD1();
  ESPNOW();
 
}
void loop() {
  forward(Train1Speed);
  //forward(180);
  //SePrint();
  //  esp_err_t result = esp_now_send(slave.peer_addr, data, sizeof(data));
  delay(1);  // watchdog timer対応
}
// ****************************************************************************************

