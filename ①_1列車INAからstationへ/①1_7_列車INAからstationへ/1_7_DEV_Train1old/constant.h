#ifndef CONSTANT_H
#define CONSTANT_H
// 受信データ格納用（送信側と同じサイズ）
uint8_t recvData[26];
const int in1 = 22;
const int in2 = 23;
// チャンネル
const uint8_t CH_IN1 = 0;
const uint8_t CH_IN2 = 1;
/* ===================== PWM設定 ===================== */
const uint32_t PWM_FREQ = 100;   // 20kHz 20000
const uint8_t PWM_RES  = 9;        // 0–255  0-511
const uint32_t VALUE_MAX = 500;//255
/* ===================== 変数 ===================== */
uint8_t Send1;
#endif
//----------------------------------------
