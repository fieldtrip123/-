#include "cmd.h"
#include "adc.h"

/*
 *==============================================================================
 *函数名称：Drv_Ps2_Gpio_Init
 *函数功能：初始化PS2遥杆引脚
 *输入参数：
 *返回值：无
 *备  注：无
 *==============================================================================
 */

adcValue_type adcValue ;
 
 
 
 
/* USER CODE BEGIN 1 */
	/*
	*adc数据处理
	*每通道的数据进行10次获取，数据的每一组的第一个和最后一个不要，并且将剩下的进行取平均值
	*
	*/

void ADC_dispose (void)
{
	adcValue .value1=adcValue .value2=adcValue .value3=adcValue .value4 =0;
	HAL_ADC_Start_DMA(&hadc1, (uint32_t *)My_adcData,adc_max);//因为你选择的软件触发，所以每次采集都需要开启一次
	static   uint8_t i;
	for(i=1;i<=8;i++){                       							 //遍历10次，进行滤波
		adcValue .value1 += My_adcData[0+4*i]*330/4096;					
		adcValue .value2 += My_adcData[1+4*i]*330/4096;
		adcValue .value3 += My_adcData[2+4*i]*330/4096;
		adcValue .value4 += My_adcData[3+4*i]*330/4096;
	}
	adcValue .value1 = adcValue .value1/8 ;
	adcValue .value2 = adcValue .value2/8 ;
	adcValue .value3 = adcValue .value3/8 ;
	adcValue .value4 = adcValue .value4/8 ;
  uint32_t recv_buff[]= { adcValue .value1  ,adcValue .value2 ,adcValue .value3 ,adcValue .value4};
  printf("adc_in1的值为%d",adcValue .value1 );
   printf("adc_in4的值为%d",adcValue .value2 );
   printf("adc_in5的值为%d",adcValue .value3 );
   printf("adc_in6的值为%d",adcValue .value4 );
  if(adcValue .value1<5)adcValue .value1=0;
}
/* USER CODE END 1 */
