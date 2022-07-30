/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtrl_Types.h
 *       Module:  System Control Types
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/

#ifndef SYSCTRL_Types_H
#define SYSCTRL_Types_H





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 
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
	Main_OSC 	=0x0					,
	Precision_Internal_OSC  ,
	Precision_divideby4_OSC	,
	Low_Freq_OSC						,
}CLOCK_SRC_OPTIONS;



typedef enum
{
	Divisor_by_1_reserved =0x0 ,
	Divisor_by_2_reserved 		 ,
	Divisor_by_3_66MHZ  ,	
	Divisor_by_4_50MHZ  ,
	Divisor_by_5_40MHZ  ,
	Divisor_by_6_33MHZ  ,
	Divisor_by_7_28MHZ  ,
	Divisor_by_8_25MHZ 	,
	Divisor_by_9_22MHZ 	,
	Divisor_by_10_20MHZ ,
	Divisor_by_11_18MHZ ,
	Divisor_by_12_16MHZ ,
	Divisor_by_13_15MHZ ,
	Divisor_by_14_14MHZ ,
	Divisor_by_15_13MHZ ,
	Divisor_by_16_12MHZ ,
	
}CLOCK_SYSDIV_OPTIONS;
 

typedef enum
{
	Freq_4MHZ=0x06   , 
	Freq_4_096MHZ    ,
	Freq_4_9152MHZ   ,
	Freq_5MHZ_USB	   ,
	Freq_5_12MHZ	   ,
	Freq_6MHZ_USB	   ,
	Freq_6_144MHZ	   ,
	Freq_7_3728MHZ	 ,
	Freq_8MHZ_USB	 	 ,
	Freq_8_192MHZ	 	 ,
	Freq_10MHZ_USB	 ,
	Freq_12MHZ_USB	 ,
	Freq_12_288MHZ	 ,
	Freq_13_56MHZ	 	 ,
	Freq_14_31818MHZ ,
	Freq_16MHZ_USB	 ,
	Freq_16_384MHZ	 ,
	Freq_18MHZ_USB	 ,
	Freq_20MHZ_USB	 ,
	Freq_24MHZ_USB	 ,
	Freq_25MHZ_USB	 	
	
}CRYSTAL_VALUE_OPTIONS;
 


 
 
 #endif