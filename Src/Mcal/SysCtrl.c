/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtrl.c
 *       Module:  System Control
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 
 
 #include "SysCtrl.h"

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION
 *********************************************************************************************************************/
void Sys_Ctrl_Init(void)
{
	
	
	#if OSC_SOURCE_SELECTED == Main_OSC
			SYS_CTRL_RCC.B.MOSCDIS=0;															//To enablele the main Oscillator
			SYS_CTRL_MOSCCTL.B.CVAL=1; 														//To enable monitor circuit for MOSC
			SYS_CTRL_RCC.B.OSCSRC=OSC_SOURCE_SELECTED; 						//Select the main Osc as teh input soruce
		  SYS_CTRL_RCC.B.XTAL=CRYSTAL_VALUE_SELECTED;						//Specifies the crystal value attached to the main oscillator
	#elif OSC_SOURCE_SELECTED ==Precision_Internal_OSC
			SYS_CTRL_RCC.B.OSCSRC=OSC_SOURCE_SELECTED;
	#elif OSC_SOURCE_SELECTED ==Precision_divideby4_OSC
			SYS_CTRL_RCC.B.OSCSRC=OSC_SOURCE_SELECTED;
	#elif OSC_SOURCE_SELECTED ==Low_Freq_OSC
			SYS_CTRL_RCC.B.OSCSRC=OSC_SOURCE_SELECTED;
	#endif
	
	
	
	
	
	#ifdef PLL_ENABLED
		SYS_CTRL_RCC.B.BYPASS=0;			//The system clock is the PLL output clock 
		SYS_CTRL_RCC.B.PWMDIV=0; 			//The PLL is operating normally.
		
		#ifndef System_Clock_Divider									//System clock divider is Forced to be used when the PLL is selected as the source.
			#define	System_Clock_Divider 1
		#endif
	
	#elif
		SYS_CTRL_RCC.B.BYPASS=1; 	//The system clock is derived from the OSC source
	#endif
	
	
	
	#if System_Clock_Divider==1
	  SYS_CTRL_RCC.B.USESYSDIV=1;
		SYS_CTRL_RCC.B.SYSDIV=DIVIDER_VALUE_SELECTED;
	#elif
		SYS_CTRL_RCC.B.USESYSDIV=0;
		SYS_CTRL_RCC.B.SYSDIV=DIVIDER_VALUE_SELECTED;
	#endif
	
	
	
	for(uint8 i=0;i<Num_Of_Peripherals_TO_EN;i++)
	{
		//Enable Clock Gate for Selected Peripherals
		SYS_CTRL_PRESENT_REGS[SysCtrl_Config[i].Peripheral_Type]|=(1<<SysCtrl_Config[i].Module_Num);
		//Enable Run Mode Clock Gating Control
		SIT_BIT(SYS_CTRL_RCGCGPIO,SysCtrl_Config[i].Module_Num);
	}
	
	
}




void Sys_Ctrl_Clock_En(uint8 Peripheral_Type,uint8 Module_Num)
{
		SYS_CTRL_PRESENT_REGS[Peripheral_Type]|=(1<<Module_Num);
}


