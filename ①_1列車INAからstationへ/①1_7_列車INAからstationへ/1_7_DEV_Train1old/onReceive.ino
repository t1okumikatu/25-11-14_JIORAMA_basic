// =====================
// 受信コールバック
// =====================
void onReceive(const esp_now_recv_info *info,
               const uint8_t *data,
               int len) {
//ESP-NOWでデータを受信した瞬間に自動で呼ばれる関数です
//（自分で呼ぶ関数ではありません）
  Serial.print("From MAC: ");
  for (int i = 0; i < 6; i++) {
    Serial.printf("%02X", info->src_addr[i]);
    if (i < 5) Serial.print(":");
  }
  
  Serial.print("  RSSI: ");
  Serial.print(info->rx_ctrl->rssi);
  Serial.print(" dBm");

  Serial.print("  Length: ");
  Serial.println(len);

  // サイズチェック
  if (len == sizeof(recvData)) {
    memcpy(recvData, data, len);

    Serial.print("DATA: ");
    for (int i = 0; i < 26; i++) {
      Serial.print(recvData[i]);
      Serial.print(" ");
      
    }
    Serial.println();
  }  else {
  Serial.println("Data size mismatch");
  Serial.println("-------------------------");
  }
  // ★ パケットチェック
  uint8_t Send1 = recvData[1];
  if (len == 26 && recvData[0] == 99 && recvData[25] == 88) {
    Send1 = recvData[1];
  }

    Serial.println("✔ 正常パケット受信");
   if (Send1 > 0) {
      forward(Send1);
    } else {
      brake();
  } 
}

   

