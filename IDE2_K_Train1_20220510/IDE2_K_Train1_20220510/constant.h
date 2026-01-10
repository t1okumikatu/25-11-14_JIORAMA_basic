#ifndef CONSTANT_H
#define CONSTANT_H
#include <esp_now.h>
extern esp_now_peer_info_t slave;
#define FrontLight_R 26  // 前方灯（赤）
#define FrontLight_B 25  // 前方灯（青）
#define BackLight_B 32   // 後方灯（青）
#define BackLight_R 33   // 後方灯（赤）
#define LoomLight1 21    // 室内灯1
#define LoomLight2 19    // 室内灯2
#define LoomLight3 18    // 室内灯3
#define LoomLight4 4     // 室内灯4
#define IN1 22
#define IN2 23
#define CH0 0
#define CH1 1
#define LEDC_TIMER_BIT  8    // PWMの範囲(8bitなら0〜255、9Bitなら0～512, 10bitなら0〜1023)
#define LEDC_BASE_FREQ 5000  // 周波数(Hz)
#define VALUE_MAX  255       // PWMの最大値
int Train1Speed;
int Speed;
int SetSpeed;
int FB_Light;
unsigned long SetTime1;
uint8_t data[9] = { 98, 0, 0, 0, 0, 0, 0, 0, 0 };
esp_now_peer_info_t slave;
#endif
//----------------------------------------
