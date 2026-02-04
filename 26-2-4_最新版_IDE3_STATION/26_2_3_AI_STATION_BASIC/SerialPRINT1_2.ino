 void Serialprint2(){
 unsigned long nowTime = millis(); 
/*
   Serial.print(F("Train1-4Flag13=="));
   Serial.print(Train1Flag13);
   Serial.print(Train2Flag13);
   Serial.print(Train3Flag13);
   Serial.println(Train4Flag13);
   
   Serial.print(F("Train1-4_Flag1-4=="));
   Serial.print(Train1Flag1);
   Serial.print(Train2Flag2);
   Serial.print(Train3Flag3);
   Serial.println(Train4Flag4);
   Serial.print(F("SubSetservoTime13==="));
   Serial.println(SubSetservoTime13);
 */
 /*
   Serial.println(F("========================="));
   Serial.print(F("startFlag------>  "));
   Serial.println(startFlag);
   Serial.print(F("compete===> "));
   Serial.println(compete);
   Serial.print(F("Train1Flag22==>Train2Flag32=="));
   Serial.print(Train1Flag22);
   Serial.println(Train2Flag32); 
  
   Serial.print("Train1-4Flag22==");
   Serial.print(Train1Flag22);
   Serial.print(Train2Flag22);
   Serial.print(Train3Flag22);
   Serial.println(Train4Flag22);
   Serial.print("Train1-4Flag32==");
   Serial.print(Train1Flag32);
   Serial.print(Train2Flag32);
   Serial.print(Train3Flag32);
   Serial.println(Train4Flag32);
   */
  //Serial.print("SubSetTime21===>MainSetTime31  ");
  //Serial.print(SubSetTime21);
 // Serial.print("  ");
  //Serial.println(MainSetTime31);

  Serial.println(F("========================="));
   Serial.print(F("startFlag------>  "));
   Serial.println(startFlag);
   Serial.print(F("compete===> "));
   Serial.println(compete);
  Serial.print(F("Time22===>Time32  "));
  Serial.print(Time22);
  Serial.print(F("  "));
  Serial.println(Time32);
  Serial.print(F("TrainTimeSetFlag1234=="));
  Serial.print(Train1TimeSetFlag1);
  Serial.print(Train2TimeSetFlag2);
  Serial.print(Train3TimeSetFlag3);
  Serial.println(Train4TimeSetFlag4);
  Serial.print(F("nowTime=="));
  Serial.println(nowTime);
  Serial.print(F("SubSetTime22===>MainSetTime32  "));
  Serial.print(SubSetTime22);
  Serial.print(F("  "));
  Serial.println(MainSetTime32);
  Serial.print(F("OUT IN  Data7=="));
  Serial.print(OUT);
  Serial.print(IN);
  Serial.println(Data7);
  Serial.print(F("SubServoTime22==>MainServoTime32  "));
  Serial.print(SubServoTime22);
  Serial.print(F("  "));
  Serial.println(MainServoTime32);
  Serial.print(F("SInPoji=="));
  Serial.println(SInPoji);
  Serial.print(F("Time822---Time832------  "));
  Serial.print(Time822);
  Serial.print(F("  "));
  Serial.println(Time832);
     Serial.print("Train==");
     Serial.println(Train);
     Serial.print("Se1234==");
     Serial.print(Send1);
     Serial.print("-");
     Serial.print(Send2);
     Serial.print("-");
     Serial.print(Send3);
     Serial.print("-");
     Serial.println(Send4);
 } 

 void Serialprint(){
  unsigned long nowTime = millis();
   Serial.print(F("Send1======"));
  Serial.println(Send1);  
   Serial.print(F("Train1Flag15D1======"));
  Serial.println(Train1Flag15D1);
   Serial.print(F("Train1Flag15D2======"));
  Serial.println(Train1Flag15D2);
   Serial.print(F("Train2Flag15D1======"));
  Serial.println(Train2Flag15D1);
   Serial.print(F("Train2Flag15D2======"));
  Serial.println(Train2Flag15D2);
   Serial.print(F("Train3Flag15D1======"));
  Serial.println(Train3Flag15D1);
   Serial.print(F("Train3Flag15D2======"));
  Serial.println(Train3Flag15D2);
   Serial.print(F("Train4Flag15D1======"));
  Serial.println(Train4Flag15D1);
   Serial.print(F("Train4Flag15D2======"));
  Serial.println(Train4Flag15D2);
  
   Serial.println(F("--------------------------------"));
  /* 
  Serial.print("S_Timer_set>>>M_Timer_set ");
  Serial.print(digitalRead(S_Timer_set));
    Serial.print(" >>> ");
  Serial.println(digitalRead(M_Timer_set));
  Serial.print("S_Train_go>>>M_Train_go ");
  Serial.print(digitalRead(S_Train_go));
    Serial.print(" >>> ");
  Serial.println(digitalRead(M_Train_go));
  */
  Serial.print(F("OUT>>>nowTime==============---- "));
  Serial.print(OUT);
  Serial.print(F(" >>> "));
  Serial.println(nowTime);
  Serial.print(F("SubSetTime10>>>>>MainSetTime32 "));
  Serial.print(SubSetTime10);
    Serial.print(F(" >>> "));
  Serial.println(MainSetTime32);
 
}

