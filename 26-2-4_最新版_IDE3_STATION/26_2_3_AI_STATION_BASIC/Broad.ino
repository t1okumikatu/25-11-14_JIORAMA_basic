void Broad(){
      //Receive();
    //esp_err_t result = esp_now_send(slave.peer_addr, data, sizeof(data));
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
             
 
   
    /*
      if(diff<2000){
          Time32=4500;
     }
      if(diff<0){
          Time22=5000;
     }
     */ 
      
      if(compete==1){
         control_1();
         control_2();
         control_3();
         control_4();
      }
      if(compete==0){
        compete_0();
      }
      
      if(compete==2){
        compete_G();
      }
      

  
      }
// ** MEGA Receive ******************************
void Receive(){
    if (Serial2.available() > 0) {
        Train = Serial2.readStringUntil('\n');
        
       //Train=Train.toInt();
       //Serial.println(Train);
      // Serial.println(Train1,Train2,Train3,Train4); //28ms
    }else {
      return;
    }
      mc = Train.length();                            
    Hedder = Train.substring(0,2);                  
    Termination = Train.substring(17,18); 
/*
    Serial.print(" length :  ");
    Serial.print(mc);
    Serial.print("  Hedder:  ");
    Serial.print(Hedder);
    Serial.print("  Termination  :  ");
    Serial.println(Termination);
   */
    if(Hedder=="99" && mc==19 && Termination=="F"){
      Train1s = Train.substring(3,5);
      if(Train1s>="00" && Train1s<="99"){
      Train1=Train1s.toInt();
      }
      
      Train2s = Train.substring(6,8);
      if(Train2s>="00" && Train2s<="99"){
      Train2=Train2s.toInt();
      }
      
      Train3s = Train.substring(9,11);
      if(Train3s>="00" && Train3s<="99"){
      Train3=Train3s.toInt();
      }
      
      Train4s = Train.substring(12,14);
       if(Train4s>="00" && Train4s<="99"){ 
      Train4=Train4s.toInt();
       }
      
      SInPoji = Train.substring(15,17);
      
         //Data5=SInPoji.toInt(); 
        // Data5=abs(data5);
      
    // Serial.print("SInPoji==");
    // Serial.println(SInPoji);
    // Serial.print("Train1-4==");
     // Serial.print(Train1);
      Data1=Train1;
     // Serial.print(Train2);
       Data2=Train2;
     // Serial.print(Train3);
       Data3=Train3;
      //Serial.println(Train4);
       Data4=Train4;
     }
  
}
// ** MEGA Receive end **************************


 
