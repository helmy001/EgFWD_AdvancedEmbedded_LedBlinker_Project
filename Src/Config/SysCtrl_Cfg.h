/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtrl_Cfg.h
 *       Module:  System Contorl dynamic Configuration
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/

#ifndef SYSCTRL_CFG_H
#define SYSCTRL_CFG_H





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 
 #include "SysCtrl_Types.h"
 
 
 /**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
 
 
 
#define	OSC_SOURCE_SELECTED 	 						Main_OSC
 
#define	CRYSTAL_VALUE_SELECTED				  	Freq_16MHZ_USB
 
#define PLL_ENABLED

#define DIVIDER_VALUE_SELECTED						Divisor_by_12_16MHZ
 
#define  System_Clock_Divider   1					/* 1 for Enable , 0 for Disable*/
 
#define Num_Of_Peripherals_TO_EN	3



typedef struct
{
	uint8	Peripheral_Type;
	uint8 Module_Num;

}SYS_CTRL_CLK_CONFIG;
 
 
 
 

 
 
 #endif