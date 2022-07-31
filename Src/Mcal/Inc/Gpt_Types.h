/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
 /**       File  :Gpt_Types.h
 *         Brief  :
 *
 *        Details : ---  
 *
 *
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
 
#ifndef GPT_TYPES_H
#define GPT_TYPES_H


#include "Mcu_Hw.h"



/**********************************************************************************************************************
*  GLOBAL CONSTANT MACROS 
*********************************************************************************************************************/

#define NUM_OF_TIMERS 12
 
typedef enum
{
	GPT_MODE_NORMAL ,
	GPT_MODE_SLEEP
	
}GPT_MODETYPE;


typedef enum
{
	TIMER_0=0	,
	TIMER_1		,
	TIMER_2		,
	TIMER_3		,
	TIMER_4		,
	TIMER_5		,
	WTIMER_0	,
	WTIMER_1	,
	WTIMER_2	,
	WTIMER_3	,
	WTIMER_4	,
	WTIMER_5	
	
}GPT_CHANNEL_TYPE;


typedef enum
{
	 One_Shot_Timer_Mode =0x1,
	 Periodic_Timer_Mode		,
	 Capture_Mode 
	
}GPT_TIMER_MODE;


typedef enum
{
	Count_Down =0 ,
	Count_Up

}GPT_TIMER_COUNT_DIR;


typedef enum
{
	TIMER_32_BIT =0 ,
	WTIMER_64_BIT=0 ,
	RTC_32_BIT=1 	,
	WRTC_64_BIT=1 ,
	TIMER_16_BIT =4,
	WTIMER_32_BIT=4,
}GPT_TIMER_REG_BITS_NUM;

typedef struct
{
	
	volatile GPT_CHANNEL_TYPE Channel_ID;
	volatile GPT_MODETYPE Timer_Mode;
	volatile GPT_TIMER_COUNT_DIR Count_Mode;
	volatile GPT_TIMER_REG_BITS_NUM NumberOf_Bits;
	
}GPT_CONFIG_TYPE;



/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/


#endif
