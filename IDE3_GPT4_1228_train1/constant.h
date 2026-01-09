#ifndef CONSTANT_H
#define CONSTANT_H
uint8_t recvData[30];
const int VALUE_MAX = 255;      // PWMの最大値
const int ledPin =6;
const int in1 = 23;//23    //1
const int in2 = 22;//22    //
const int freq = 5000; 
#define resolution 8
const int ch1 =1;
const int ch2 =2;
const int ch0 =0;
int webstopFlag=0;
bool ledFlag = true;      // LED制御フラグ
bool UpdateFlag = false;
String UpdateURL = "";
//===================================
  int Send1;//speed
  int FB_Light;
  int Send2;//speed
  int Send3;//speed
  int Send4;//speed
  int ctr;
  int Train1;//poji
  int Train2;//poji
  int Train3;//poji
  int Train4;//poji
  int Data5;   //servo In
  int Data6;  //servo Out
  int Data7;   //sub_start   1 
  int T2ADC;
#endif
//----------------------------------------
