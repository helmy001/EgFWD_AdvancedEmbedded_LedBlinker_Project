/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Types.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_TYPES_H
#define INTCTRL_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Mcu_Hw.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
		GPIO_PORT_A =0 ,
		GPIO_PORT_B ,
		GPIO_PORT_C ,
		GPIO_PORT_D ,
	 	GPIO_PORT_E ,
	  UART_0 ,
		UART_1 ,
		SSI_0 ,
	  I2C_0 ,
		PWM0_FAULT  ,
  	PWM0_Generator_0 ,
		PWM0_Generator_1 ,
		PWM0_Generator_2 ,
	  QEI_0 ,
	  ADC0_Sequence_0 ,
	  ADC0_Sequence_1 ,
		ADC0_Sequence_2 ,
		ADC0_Sequence_3 ,
		WDT_0_and_1		,
		Timer_0A_16_32_Bit ,
	  Timer_0B_16_32_Bit ,
	  Timer_1A_16_32_Bit ,
		Timer_1B_16_32_Bit ,
		Timer_2A_16_32_Bit ,
		Timer_2B_16_32_Bit ,
		Analog_Comparator_0 ,
		Analog_Comparator_1 ,
		System_Control=28  ,
		Flash_Mem_Cnt_EEPROM_Cnt ,
		GPIO_PORT_F ,
		UART_2=33  ,
		SSI_1  ,
		Timer_3A_16_32_Bit  ,
    Timer_3B_16_32_Bit  ,
		I2C_1  ,
		QEI_1  ,
		CAN_0  ,
		CAN_1  ,
		Hibernation_Module=43  ,
    USB  ,
    PWM_Generator_3  ,		
		uDMA_Software    ,
   	uDMA_ERROR ,
		ADC_1_Sequence_0 ,
		ADC_1_Sequence_1 ,
		ADC_1_Sequence_2 ,
		ADC_1_Sequence_3 ,
		SSI_2 =57  ,
		SSI_3			 ,
		UART_3 ,
		UART_4 ,
		UART_5 ,
		UART_6 ,
		UART_7 ,
	  I2C_2=68 ,
		I2C_3    ,
		Timer_4A_16_32_Bit ,
	  Timer_4B_16_32_Bit ,
		Timer_5A_16_32_Bit=92 ,
	  Timer_5B_16_32_Bit 		,
		Timer_0A_32_64_Bit 		,
		Timer_0B_32_64_Bit 		,
		Timer_1A_32_64_Bit 		,
		Timer_1B_32_64_Bit 		,
		Timer_2A_32_64_Bit 		,
		Timer_2B_32_64_Bit 		,
		Timer_3A_32_64_Bit 		,
		Timer_3B_32_64_Bit 		,
	  Timer_4A_32_64_Bit 		,
		Timer_4B_32_64_Bit 		,
		Timer_5A_32_64_Bit 		,
		Timer_5B_32_64_Bit 		,
		System_Exception 			,
		PWM_1_Generator_0=134  ,
		PWM_1_Generator_1 		 ,
		PWM_1_Generator_2 		 ,
		PWM_1_Generator_3 		 ,
		PWM_1_Fault	
}NVIC_Interrupts_Types;


typedef enum
{
		Int_8GroupPriority_1Sub =0x0,
	  Int_4GroupPriority_2Sub =0x5,
	  Int_2GroupPriority_4Sub =0x6,
	  Int_1GroupPriority_8Sub =0x7
}INT_Priority_Level_Type;
 

typedef enum
{
		/*********** XXX *************/
		INT_PRI_XXX_Group0_Sub0=0b0 ,// 
		INT_PRI_XXX_Group1_Sub0     ,//
		INT_PRI_XXX_Group2_Sub0     ,// 
		INT_PRI_XXX_Group3_Sub0     ,// 
		INT_PRI_XXX_Group4_Sub0     ,// 
	  INT_PRI_XXX_Group5_Sub0     ,// 
		INT_PRI_XXX_Group6_Sub0     ,// 
		INT_PRI_XXX_Group7_Sub0     ,//
		/*****************************/
	
	  /************* XXY ***************/
		INT_PRI_XXy_Group0_Sub0=0b000   ,//
	  INT_PRI_XXy_Group1_Sub0=0b010   ,//
	  INT_PRI_XXy_Group2_Sub0=0b100   ,//
	  INT_PRI_XXy_Group3_Sub0=0b110   ,//
																		 //
		INT_PRI_XXy_Group0_Sub1=0b001		,//
	  INT_PRI_XXy_Group1_Sub1=0b011  	,//
	  INT_PRI_XXy_Group2_Sub1=0b101		,//
	  INT_PRI_XXy_Group3_Sub1=0b111 	,//
		/*********************************/
		
		/************** XYY **************/
		INT_PRI_Xyy_Group0_Sub0=0b000	  ,//
	  INT_PRI_Xyy_Group1_Sub0=0b100   ,//
																		 //
	  INT_PRI_Xyy_Group0_Sub1=0b001   ,//
	  INT_PRI_Xyy_Group1_Sub1=0b101   ,//
																		 //
		INT_PRI_Xyy_Group0_Sub2=0b010   ,//
	  INT_PRI_Xyy_Group1_Sub2=0b110   ,//
																		 //
	  INT_PRI_Xyy_Group0_Sub3=0b011   ,//
	  INT_PRI_Xyy_Group1_Sub3=0b111   ,//
		/*********************************/
		
		/************ YYY ************/
		INT_PRI_yyy_Group0_Sub0=0b0 ,//
	  INT_PRI_yyy_Group0_Sub1     ,//
	  INT_PRI_yyy_Group0_Sub2     ,//
	  INT_PRI_yyy_Group0_Sub3     ,//
		INT_PRI_yyy_Group0_Sub4     ,//
	  INT_PRI_yyy_Group0_Sub5     ,//
	  INT_PRI_yyy_Group0_Sub6     ,//
	  INT_PRI_yyy_Group0_Sub7      //
		/*****************************/
	  
}Priority_Level;








#endif  /* INTCTRL_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Types.h
 *********************************************************************************************************************/
