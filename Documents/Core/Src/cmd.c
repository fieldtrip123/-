#include "cmd.h"
#include "adc.h"

/*
 *==============================================================================
 *�������ƣ�Drv_Ps2_Gpio_Init
 *�������ܣ���ʼ��PS2ң������
 *���������
 *����ֵ����
 *��  ע����
 *==============================================================================
 */

adcValue_type adcValue ;
 
 
 
 
/* USER CODE BEGIN 1 */
	/*
	*adc���ݴ���
	*ÿͨ�������ݽ���10�λ�ȡ�����ݵ�ÿһ��ĵ�һ�������һ����Ҫ�����ҽ�ʣ�µĽ���ȡƽ��ֵ
	*
	*/

void ADC_dispose (void)
{
	adcValue .value1=adcValue .value2=adcValue .value3=adcValue .value4 =0;
	HAL_ADC_Start_DMA(&hadc1, (uint32_t *)My_adcData,adc_max);//��Ϊ��ѡ����������������ÿ�βɼ�����Ҫ����һ��
	static   uint8_t i;
	for(i=1;i<=8;i++){                       							 //����10�Σ������˲�
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
  printf("adc_in1��ֵΪ%d",adcValue .value1 );
   printf("adc_in4��ֵΪ%d",adcValue .value2 );
   printf("adc_in5��ֵΪ%d",adcValue .value3 );
   printf("adc_in6��ֵΪ%d",adcValue .value4 );
  if(adcValue .value1<5)adcValue .value1=0;
}
/* USER CODE END 1 */
