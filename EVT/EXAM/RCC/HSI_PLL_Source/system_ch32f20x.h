/********************************** (C) COPYRIGHT *******************************
* File Name          : system_ch32f20x.h
* Author             : WCH
* Version            : V1.0.0
* Date               : 2024/06/26
* Description        : CH32F20x Device Peripheral Access Layer System Header File.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/
#ifndef __SYSTEM_CH32F20x_H
#define __SYSTEM_CH32F20x_H

#ifdef __cplusplus
extern "C" {
#endif


#define HSI      0   //HSI
#define HSI_1_2  1   //HSI/2

//#define PLL_Source   HSI
#define PLL_Source   HSI_1_2

extern uint32_t SystemCoreClock;          /* System Clock Frequency (Core Clock) */

/* System_Exported_Functions */
extern void SystemInit( void );
extern void SystemCoreClockUpdate( void );

#ifdef __cplusplus
}
#endif

#endif /*__CH32F20x_SYSTEM_H */



