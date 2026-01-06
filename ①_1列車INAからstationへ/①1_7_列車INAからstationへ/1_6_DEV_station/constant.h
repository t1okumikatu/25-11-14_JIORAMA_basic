#ifndef CONSTANT_H
#define CONSTANT_H

// Station（送信側）の STA MAC アドレス
//uint8_t stationAddress[] = {0xA0, 0xB7, 0x65, 0x58, 0x7A, 0xFC};
uint8_t broadcastAddress[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
// 送信する float 配列（5要素）
uint8_t data[26]={99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,88};
#endif