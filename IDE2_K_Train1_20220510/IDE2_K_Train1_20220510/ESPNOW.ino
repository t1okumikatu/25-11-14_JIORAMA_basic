void ESPNOW(){
  // ** ESP-NOW初期化 *********************************************************************
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  if (esp_now_init() == ESP_OK) {
  } else {
    return;
  }
  // ***************************************************************************************
  // ** マルチキャスト用Slave登録 ************************************************************
  memset(&slave, 0, sizeof(slave));

  for (int i = 0; i < 6; ++i) {
    slave.peer_addr[i] = (uint8_t)0xff;
  }

  esp_err_t addStatus = esp_now_add_peer(&slave);
  if (addStatus == ESP_OK) {
    //    digitalWrite(LoomLight1, HIGH);                // WiFi確定でLoomLight点灯
  }
  // ****************************************************************************************
  // ** ESP-NOWコールバック登録 **************************************************************
  //esp_now_register_send_cb(OnDataSent);
  esp_now_register_recv_cb(OnDataRecv);
  // ****************************************************************************************
  //disableCore0WDT();  // watchdog timer対応
 // disableCore1WDT();  // watchdog timer対応
}