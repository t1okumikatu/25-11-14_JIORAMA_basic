// ===== 電圧送信 =====
void readV() {
    esp_err_t result = esp_now_send(
       broadcastAddress,
       (uint8_t *)data,
        sizeof(data)   //配列サイズ
        );      
Serial.println(result == ESP_OK ? "Send1 OK" : "Send1 FAIL");
  delay(1000);
  }

