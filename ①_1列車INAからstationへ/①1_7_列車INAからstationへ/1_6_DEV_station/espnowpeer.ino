void nowpeer() {
  esp_wifi_set_channel(6, WIFI_SECOND_CHAN_NONE);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW Init Failed");
    return;
  }

  esp_now_peer_info_t peerInfo = {};//{}初期化　ESP-NOWの通信相手情報を入れるための構造体
  memcpy(peerInfo.peer_addr,broadcastAddress,6);

  // ★ チャンネルは WiFi.getChannel() を使う！
  peerInfo.channel = WiFi.channel();
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer");//ESP-NOW の通信相手（peer）登録が成功したか確認している処理です。
  }
}
