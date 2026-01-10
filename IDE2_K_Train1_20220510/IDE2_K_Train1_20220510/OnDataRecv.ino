// ** 受信コールバック *********************************************************************
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *data, int data_len) {
  char macStr[18];
  snprintf(macStr, sizeof(macStr), "%02X:%02X:%02X:%02X:%02X:%02X",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  for ( int i = 0 ; i < data_len ; i++ ) {
     Serial.print(data[i]);
     Serial.print(",");
     }
  Serial.print("\n");
  
  if (data[0] == 99) {
    Train1Speed = data[1];  // 1号車走行速度指令
    FB_Light = data[2];     // 1号車前後走行指令、前照灯,ルーム照明
  }
  Serial.print("Train1Speed  ");
  Serial.println(Train1Speed);

}
// ***************************************************************************************