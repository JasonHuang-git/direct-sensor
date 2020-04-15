#ifndef _TIM_H
#define _TIM_H


#include "stm32l0xx.h"
#include "stm32l031xx.h"

//void TIM2_Init(void);       //PA0   TIM2_ETR ������������� 
//void TIM21_ETR_Init(void);  //PA1 TIM21_ETR  �������������


//void TIM22_CH2_Init(void);   //  PA10 �������������

void TIM2_Init(void);            //     TIM2��ʱ100ms
//void TIM22_Init(void);            //    TIM22 ��ʱ100ms
void MX_TIM22_Init(void);

void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
#endif