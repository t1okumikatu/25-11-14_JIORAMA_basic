void setup_servo(){
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  OUT=1;
  IN=1;
}
 /* 
void in_Servo_Contlor(){
// ** In Servo Contlor ******************************************************

  if(Data5==1 && ServoInFlag==0){ // Sub(ServoがMain)  入口
    // sub  入口
    digitalWrite(PIN_PE0, HIGH);         // Servo In Sub 青
    //digitalWrite(PIN_PD3, LOW);          // PointSingnal In/Sub/Red
    //digitalWrite(PIN_PD0, LOW);          // PointSingnal In/Main/Green
    digitalWrite(PIN_PE1, LOW);          // Servo In Main 橙
    //digitalWrite(PIN_PD2, HIGH);         // PointSingnal In/Sub/Green
    //digitalWrite(PIN_PD1, HIGH);         // PointSingnal In/Main/Red
    digitalWrite(servoInt, LOW);
    //delay(1);
    digitalWrite(servoInt, HIGH); 
   
    ServoInFlag = 0;
  }
  if(Data5==2 && ServoInFlag==0)
  { // Main　入口
   
    digitalWrite(PIN_PE0,LOW);         // Servo In Sub 青
    //digitalWrite(PIN_PD2, LOW);          // PointSingnal In/Sub/Green
    //digitalWrite(PIN_PD1, LOW);          // PointSingnal In/Main/Red
    digitalWrite(PIN_PE1,HIGH);          // Servo In Main　橙
   // digitalWrite(PIN_PD3, HIGH);         // PointSingnal In/Sub/Red
   // digitalWrite(PIN_PD0, HIGH);         // PointSingnal In/Main/Green
    digitalWrite(servoInt, LOW);
    delay(1);
    digitalWrite(servoInt, HIGH); 
   
    ServoInFlag = 0;
  }
}

void out_Servo_Contlor(){  
    if(Data6==1 ){        // 出口　Sub側
      //ServoOutFlag = 1;                // Sub Flag
      //digitalWrite(PIN_PD7, LOW);      // PointSingnal Out/Sub/Red
      //digitalWrite(PIN_PD4, LOW);      // PointSingnal Out/Main/Green
    
      digitalWrite(PIN_PE2, HIGH);    // Servo Out Sub  HIGH_PE2
      digitalWrite(PIN_PE3, LOW);     // LOOP_SUB Servo Out Main
       digitalWrite(servoInt, LOW);
   // delay(1);
    digitalWrite(servoInt, HIGH); 
                
      //digitalWrite(PIN_PD6, HIGH);     // PointSingnal Out/Sub/Green
      //digitalWrite(PIN_PD5, HIGH);     // PointSingnal Out/Main/Red
      }
    
     if(Data6==2  ){   // 出口　Main側
                                        // Main Flag
      digitalWrite(PIN_PE2, LOW);     // Servo Out Sub
      digitalWrite(PIN_PE3, HIGH);      //LOOP_SUB  Servo Out Main
      digitalWrite(servoInt, LOW);
    //delay(1);
    digitalWrite(servoInt, HIGH); 
      //digitalWrite(PIN_PD6, LOW);      // PointSingnal Out/Sub/Green
      //digitalWrite(PIN_PD5, LOW);      // PointSingnal Out/Main/Red
      //digitalWrite(PIN_PD7, HIGH);     // PointSingnal Out/Sub/Red
      //digitalWrite(PIN_PD4, HIGH);     // PointSingnal Out/Main/Green
       
    }*/
  /*
    //>>>>sub_0-main_!0>>>>MAIN
  if(SubSetTime22==0 && MainSetTime32!=0){
    ServoOutFlag = 0;                   // Sub Flag
    //digitalWrite(PIN_PD7, LOW);         // PointSingnal Out/Sub/Red
    //digitalWrite(PIN_PD4, LOW);         // PointSingnal Out/Main/Green
    digitalWrite(PIN_PE3, HIGH);        // Servo Out Main
    digitalWrite(PIN_PE2, LOW);         // Servo Out Sub
    //digitalWrite(PIN_PD6, HIGH);        // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, HIGH);        // PointSingnal Out/Main/Red
  }
     //>>>>>sub_!0-main_0>>>SUB
  if(SubSetTime22!=0 && MainSetTime32==0){
    ServoOutFlag = 0;                   // Main Flag
    //digitalWrite(PIN_PD6, LOW);         // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, LOW);         // PointSingnal Out/Main/Red
    digitalWrite(PIN_PE2, HIGH);        // Servo Out Sub
    digitalWrite(PIN_PE3, LOW);         // Servo Out Main
    //digitalWrite(PIN_PD7, HIGH);        // PointSingnal Out/Sub/Red
   // digitalWrite(PIN_PD4, HIGH);        // PointSingnal Out/Main/Green
  }
  //>>>>>>sub_main=0>>>SUB
  if(SubSetTime22==0 && MainSetTime32==0){
    ServoOutFlag = 0;                  // Sub Flag
    //digitalWrite(PIN_PD7, LOW);        // PointSingnal Out/Sub/Red
    //digitalWrite(PIN_PD4, LOW);        // PointSingnal Out/Main/Green
    digitalWrite(PIN_PE2, HIGH);       // Servo Out Main
    digitalWrite(PIN_PE3, LOW);        // Servo Out Sub
    //digitalWrite(PIN_PD6, HIGH);       // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, HIGH);       // PointSingnal Out/Main/Red
  }
}*/
  

  
