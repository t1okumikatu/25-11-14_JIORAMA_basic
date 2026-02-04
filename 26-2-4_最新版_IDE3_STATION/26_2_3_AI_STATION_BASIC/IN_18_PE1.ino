 void IN_18_PE1 (){
  if (IN==1){
  digitalWrite(PIN_PE1, LOW);          // LOOP_SUB　緑18
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
 }
  if (IN==2){
  digitalWrite(PIN_PE1, HIGH);          // LOOP_Main　緑18
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
 }
 }
