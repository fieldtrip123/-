#ifndef _CMD_H__
#define _CMD_H__

#include "stm32f10x.h"
// ҡ��ɨ�践��ֵ����
#define XLEFT     1   // X������
#define XRIGHT    2   // X������
#define YBEFORE   3   // Y��ǰ��
#define YAFTER    4   // Y�����
#define TOPLEFT   5   // б��������
#define TOPRIGHT  6   // б��������
#define LOWLEFT   7   // б��������
#define LOWRIGHT  8   // б��������
#define ZDOWN     9   // Z�ᰴ��

#define XLEFT2     10   // X������
#define XRIGHT2    20   // X������
#define YBEFORE2   30   // Y��ǰ��
#define YAFTER2    40   // Y�����
#define TOPLEFT2   50   // б��������
#define TOPRIGHT2  60   // б��������
#define LOWLEFT2   70   // б��������
#define LOWRIGHT2  80   // б��������
#define ZDOWN2     90   // Z�ᰴ��

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
