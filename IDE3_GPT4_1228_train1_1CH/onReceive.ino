// =====================
// 受信コールバック
// =====================
void onReceive(const esp_now_recv_info *info,
               const uint8_t *data,
               int len) {

  // サイズチェック
  if (len == sizeof(recvData)) {
    memcpy(recvData, data, len);

    //Serial.print("DATA: ");
    for (int i = 0; i < 30; i++) {
      Serial.print(recvData[i]);
      Serial.print(",");  
    }
    Serial.println();
  }  else {
  Serial.println("Data size mismatch");
  Serial.println("-------------------------");
  }
  // ★ パケットチェック
  uint8_t Send1 = recvData[1];
  if (len == 30 && recvData[0] == 99 && recvData[29] == 88) {
    Send1 = recvData[1];
  }
    forward(Send1);
    Serial.println("✔ 正常パケット受信");
    Serial.print("setupSend1  ");
  Serial.println(Send1);
}

   

