void megasignal(){
 Serial2.write("R");
 //delay(100);
 Serial2.write("4");//1=2ms 4ms  err 6ms-OK Loop-4ms
 Serial2.write("Z");
 }