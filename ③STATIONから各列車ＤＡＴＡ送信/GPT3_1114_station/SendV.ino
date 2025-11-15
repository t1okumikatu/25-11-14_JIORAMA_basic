 // 定期的にコマンド送信（1秒ごと）
  void SendV(){
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
    switch (sendData.flag) {
    case 0: Serial.println("停止"); break;
    case 1: Serial.println("前進"); break;
    case 2: Serial.println("後退"); break;
    default: break;
  }
  }