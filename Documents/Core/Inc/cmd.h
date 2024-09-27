#ifndef _CMD_H__
#define _CMD_H__

#include "stm32f10x.h"
// 摇杆扫描返回值定义
#define XLEFT     1   // X轴左推
#define XRIGHT    2   // X轴右推
#define YBEFORE   3   // Y轴前推
#define YAFTER    4   // Y轴后推
#define TOPLEFT   5   // 斜向左上推
#define TOPRIGHT  6   // 斜向右上推
#define LOWLEFT   7   // 斜向左下推
#define LOWRIGHT  8   // 斜向右下推
#define ZDOWN     9   // Z轴按下

#define XLEFT2     10   // X轴左推
#define XRIGHT2    20   // X轴右推
#define YBEFORE2   30   // Y轴前推
#define YAFTER2    40   // Y轴后推
#define TOPLEFT2   50   // 斜向左上推
#define TOPRIGHT2  60   // 斜向右上推
#define LOWLEFT2   70   // 斜向左下推
#define LOWRIGHT2  80   // 斜向右下推
#define ZDOWN2     90   // Z轴按下

 const int adc_max =40;
uint16_t My_adcData [adc_max]={0};
 
typedef struct {
	uint16_t value1;
	uint16_t value2;
	uint16_t value3;
	uint16_t value4;
}adcValue_type;
 
 extern  adcValue_type adcValue ;
void ADC_dispose (void);

#endif
