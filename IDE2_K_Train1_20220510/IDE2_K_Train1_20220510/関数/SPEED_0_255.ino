// ** Speed : ( 0 - 255) *　3倍 **********************************************************
void SPEED(){
  
  if (Train1Speed != 0) {
    Speed = Train1Speed * 3;
    
    if (millis()-SetTime1>=100) {
      SetTime1 = millis();   // ★ ここで更新
      SetSpeed++;

      if (SetSpeed >= Speed) {
        SetSpeed = Speed;
      }
    }
  }

  // ** Forward ****************
  if (FB_Light == 10) {
    brake();
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, LOW);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, LOW);
  }
  if (FB_Light == 11) {
    brake();
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, LOW);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, HIGH);
  }
  if (FB_Light == 12) {
    forward(SetSpeed);
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, HIGH);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, HIGH);
  }
  if (FB_Light == 13) {
    forward(SetSpeed);
    digitalWrite(FrontLight_B, HIGH);
    digitalWrite(FrontLight_R, LOW);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, HIGH);
  }
  if (FB_Light == 14) {
    forward(Speed);
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, LOW);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, HIGH);
  }
  if (FB_Light == 15) {
    forward(SetSpeed);
  }
  if (FB_Light == 16) {
    forward(SetSpeed);
  }
  if (FB_Light == 17) {
    forward(SetSpeed);
  }
  if (FB_Light == 18) {
    forward(SetSpeed);
  }
  if (FB_Light == 19) {
    forward(SetSpeed);
  }
  // ** Reverse ****************
  if (FB_Light == 20) {
    brake();
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, LOW);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, LOW);
  }
  if (FB_Light == 21) {
    brake();
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, HIGH);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, LOW);
  }
  if (FB_Light == 22) {
    reverse(SetSpeed);
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, HIGH);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, HIGH);
  }
  if (FB_Light == 23) {
    reverse(SetSpeed);
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, HIGH);
    digitalWrite(BackLight_B, HIGH);
    digitalWrite(BackLight_R, LOW);
  }
  if (FB_Light == 24) {
    reverse(SetSpeed);
    digitalWrite(FrontLight_B, LOW);
    digitalWrite(FrontLight_R, HIGH);
    digitalWrite(BackLight_B, LOW);
    digitalWrite(BackLight_R, LOW);
  }
  if (FB_Light == 25) {
    reverse(SetSpeed);
  }
  if (FB_Light == 26) {
    reverse(SetSpeed);
  }
  if (FB_Light == 27) {
    reverse(SetSpeed);
  }
  if (FB_Light == 28) {
    reverse(SetSpeed);
  }
  if (FB_Light == 29) {
    reverse(SetSpeed);
  }
}
  