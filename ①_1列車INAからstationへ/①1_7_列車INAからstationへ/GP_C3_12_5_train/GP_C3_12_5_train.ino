#include <esp_now.h>
#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

// Station（受信側）の STA MAC アドレス
uint8_t stationAddress[] = {0xA0, 0xB7, 0x65, 0x58, 0x7A, 0xFC};

// 送信する float 配列（5要素）
float sendData[5];

struct BatteryData {
  float shuntVoltage;
  float busVoltage;
  float current_mA;
  float power_mW;
  float loadVoltage;
};

unsigned long lastVoltageTime = 0;
const unsigned long voltageInterval = 1000;  // 1秒ごと送信

void setup() {
  Serial.begin(115200);
  ina219.begin();
  APSTA();
  nowpeer();
}

void loop() {
  readV();
  delay(50);
}
