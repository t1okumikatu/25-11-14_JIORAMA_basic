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
   // シリアル入力でflagを設定
    if (Serial.available() > 0) {
      char input = Serial.read();
      switch(input) {
        case 's':
          sendData.flag = 0;  // 停止
          Serial.println("STOP");
          break;
        case 'w':
          sendData.flag = 1;  // 前進
          Serial.println("FOWARD");
          break;
        case 'x':
          sendData.flag = 2;  // 後退
          Serial.println("BACK");
          break;
        default:
          Serial.println("無効な入力（0, 1, 2を入力）");
          break;
      }
    }
    
    // ESP-NOWでデータ送信
    esp_err_t result = esp_now_send(trainAddress, (uint8_t *)&sendData, sizeof(sendData));
    
    
  }

