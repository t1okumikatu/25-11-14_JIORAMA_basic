void guide(){
  pinMode(StartSW, INPUT_PULLUP); // ボタンは GND に落とす
  // 起動時にボタン状態チェック
  if (digitalRead(StartSW) == LOW) {
    unsigned long pressStart = millis();
    // ボタンが離されるまで待つ
    while (digitalRead(StartSW) == LOW) { }
    unsigned long pressDuration = millis() - pressStart;
    if (pressDuration >= RESET_PRESS_TIME) {
      Serial.println("=== リセットモード起動（長押し3秒以上） ===");
      // ★ここにリセット処理を書く
      compete=2;
    } else {
      Serial.println("=== ボタンを押さずに起動（通常起動） ===");
    // ★普通の起動
      //compete=0;

    } 
  }
}