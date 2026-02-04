void STOP(){
  if(digitalRead(StartSW) == 0){
    while(1){
     if(restart==1){
      break;
     }
      if(data[0] == 99 && data[29] == 88){
    //esp_err_t result = esp_now_send(slave.peer_addr, data, sizeof(data));
      Send1=0;
      Send2=0;
      Send3=0;
      Send4=0;
      
      data[0]  = 99;            // header
      data[1]  = Send1*2;     // Train5 Speed(0-255)
      data[2]  = FB_LIght;     // Train5 Speed(0-255)
      data[3]  = Send2*2;     // Train5 Speed(0-255)       
      data[4]  = FB_LIght;     // Train5 Speed(0-255) 
      data[5]  = Send3*2;     // Train5 Speed(0-255)
      data[6]  = FB_LIght;     // Train5 Speed(0-255)
      data[7]  = Send4*2;     // Train5 Speed(0-255)       
      data[8]  = FB_LIght;     // Train5 Speed(0-255)      
      data[9]  = Train1;   // Train1_poji
      data[10]  = Train2;  // Train2_poji  
      data[11]  = Train3;   // Train3_poji       
      data[12]  = Train4;  // Train4_poji         
      data[13] = IN;            // SIn
      data[14] = OUT;            // SOut
      data[15] = Data7;            //  SubLed; 
      data[16] = Data7;            // MainLed;
      data[17]  = ctr;       //
      data[18] = startbutton;  
      data[19] = 88; 
      data[20] = 88;
      data[21] = 88;
      data[22] = 88;
      data[23] = 88;
      data[24] = 88;
      data[25] = 88;  
      data[26] = 88; 
      data[27] = 88; 
      data[28] = 88; 
      data[29] = 88; 
    
  esp_err_t result = esp_now_send(broadcastAddress, data, sizeof(data));
      }
     // if(digitalRead(StartSW) == 0){
      //  restart=1;
     // }
}
//ESP.restart();
  }
}
