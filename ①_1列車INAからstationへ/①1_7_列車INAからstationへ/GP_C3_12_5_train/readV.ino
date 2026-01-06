// ===== 電圧読み取り =====
BatteryData readBattery() {
  BatteryData d;

  d.shuntVoltage = ina219.getShuntVoltage_mV();
  d.busVoltage   = ina219.getBusVoltage_V();
  d.current_mA   = ina219.getCurrent_mA();
  d.power_mW     = ina219.getPower_mW();
  d.loadVoltage  = d.busVoltage + (d.shuntVoltage / 1000.0); // mV→V変換

  // 必要ならデバッグ表示
  //Serial.print("Bus Voltage:   "); Serial.print(d.busVoltage);   Serial.println(" V");
  //Serial.print("Shunt Voltage: "); Serial.print(d.shuntVoltage); Serial.println(" mV");
  //Serial.print("Load Voltage:  "); Serial.print(d.loadVoltage);  Serial.println(" V");
  //Serial.print("Current:       "); Serial.print(d.current_mA);   Serial.println(" mA");
  //Serial.print("Power:         "); Serial.print(d.power_mW);     Serial.println(" mW");
  //Serial.println("");
  return d;
}

// ===== 電圧送信 =====
void readV() {
  if (millis() - lastVoltageTime > voltageInterval) {
    lastVoltageTime = millis();

    BatteryData d = readBattery();

    sendData[0] = d.shuntVoltage;
    sendData[1] = d.busVoltage;
    sendData[2] = d.current_mA;
    sendData[3] = d.power_mW;
    sendData[4] = d.loadVoltage;

    esp_err_t result = esp_now_send(stationAddress, (uint8_t *)sendData, sizeof(sendData));

    if (result == ESP_OK) {
      Serial.println(sendData[0],2);
      Serial.println(sendData[1],2);
      Serial.println(sendData[2],2);
      Serial.println(sendData[3],2);
      Serial.println(sendData[4],2);
    } else {
      Serial.println("送信エラー");
    }
  }
}
