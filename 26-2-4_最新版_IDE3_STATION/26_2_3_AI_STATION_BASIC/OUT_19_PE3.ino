 void OUT_19_PE3 (){
  if (OUT==1){    //Sub
  digitalWrite(PIN_PE3, LOW);             // LOOP_SUB　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
 }
  if (OUT==2){    //Main
  digitalWrite(PIN_PE3, HIGH);            // LOOP_MAIN　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
 }
 }
