/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
 /**       File  :FileName.c
 *         Brief  :
 *
 *        Details : ---  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Gpt.h"


/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

void Gpt_Init(void)
{
		for(uint8 i=0;i<Num_Of_Timers_To_Init;i++)
		{
				//Ensure the timer is disabled
				Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMCTL.B.TAEN=0;
				Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMCTL.B.TBEN=0;
				//Set the num of bits of timer register
			  Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMCFG|=(Timers_ConfigSet[i].NumberOf_Bits&0x7);
			  
				//Select the mode of the Timer and Enable the Interrupt
			  #if TIMERx_A_STATE==ENABLE
					Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMTAMR.B.TNMR=Timers_ConfigSet[i].Timer_Mode;
					SIT_BIT(Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMIMR,0);
				#endif
			
				#if TIMERx_B_STATE==ENABLE
					Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMTBMR.B.TNMR=Timers_ConfigSet[i].Timer_Mode;
					SIT_BIT(Timer_Config_REGS[Timers_ConfigSet[i].Channel_ID]->GPTMIMR,8);
			  #endif
			 
		}
}

void Gpt_StartTimer(GPT_CHANNEL_TYPE Channel_ID,Gpt_Value_Type Value)
{
	#if TIMERx_A_STATE==ENABLE
	Timer_Config_REGS[Channel_ID]->GPTMTAILR=Value;
	Timer_Config_REGS[Channel_ID]->GPTMCTL.B.TAEN=1;
	#endif
	
	#if TIMERx_B_STATE==ENABLE 
	Timer_Config_REGS[Channel_ID]->GPTMTBILR=Value;
	Timer_Config_REGS[Channel_ID]->GPTMCTL.B.TBEN=1;
	#endif
}


void Clear_Interrupt_Status_Bit(GPT_CHANNEL_TYPE Channel_ID)
{
	//Clear teh status flag by writing one to GPTMICR Reg
 #if TIMERx_A_STATE==ENABLE
	SIT_BIT(Timer_Config_REGS[Channel_ID]->GPTMICR,0);
 #endif
 
	#if TIMERx_B_STATE==ENABLE
 	SIT_BIT(Timer_Config_REGS[Channel_ID]->GPTMICR,8);
 #endif	
}

void Gpt_StopTimer(GPT_CHANNEL_TYPE Channel_ID)
{
	#if TIMERx_A_STATE==ENABLE
	Timer_Config_REGS[Channel_ID]->GPTMCTL.B.TAEN=0;
	#endif
	
	#if TIMERx_B_STATE==ENABLE
	Timer_Config_REGS[Channel_ID]->GPTMCTL.B.TBEN=0;
	#endif
	
}



/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
