void START_SW(){
  Serial.println("1_start_button");
  startbutton=1; 
  pinMode(StartSW ,INPUT_PULLUP);
  pinMode(servoInt ,OUTPUT);
  Serial.print("2_start_button=");
  Serial.println(startbutton);
  while(digitalRead(StartSW) == HIGH){}//1-0
  startbutton=0; 
  Serial.print("3_start_button=");
  Serial.println(startbutton);
  delay(2000); 
  while(digitalRead(StartSW) == HIGH){}//1-0
  startbutton=1;
  Serial.print("4_start_button=");
  Serial.println(startbutton);
  delay(2000); 
  megasignal();
}
 
 