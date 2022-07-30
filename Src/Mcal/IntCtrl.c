/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        File :  IntCrtl.c
*        brief :  Nested Vector Interrupt Controller Driver
 *
 *      Details:  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "IntCtrl.h"


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


void IntCrtl_Init(void)
{
	
	// Configuring the split of group priority from subpriority in APINT REG
	SCB_APINT.R=(APINT_REG_KEY|(Int_xGroupPriority_xSub<<8));
	
	// Enable all interrupts defined by the user and sit there priority in PRIx Reg for each interrupt
	for(uint8 i=0;i<Num_OfInt_TO_ENABLE;i++	)
	{
		uint8 Int_number= interrupt_config[i].Int_Num;
		//Assign Group\Subgroup priority in NVIC_PRIx Nvic
		uint8 INTx_Pri=Int_number%4;
		switch(INTx_Pri)
		{
			case 0:
				NVIC_REGS.PRIx[Int_number/4].B.INTA=interrupt_config[i].Priority;
				break;
			case 1:
				NVIC_REGS.PRIx[Int_number/4].B.INTB=interrupt_config[i].Priority;
				break;
			case 2:
				NVIC_REGS.PRIx[Int_number/4].B.INTC=interrupt_config[i].Priority;
				break;
			case 3:
				NVIC_REGS.PRIx[Int_number/4].B.INTD=interrupt_config[i].Priority;
				break;
		}
		
		//Enable the Interrupt bit in ENx Register
		SIT_BIT( NVIC_REGS.ENx[Int_number/32].R,Int_number%32 );
	}
	

	/*TODO : Enable\Disable based on user configurations in NVIC_ENx and SCB_Sys Registers */
	
}


void NVIC_Enable_Interrupt(uint8 Interrupt_Num,uint8 Priority)
{
	
	uint8 INTx= (Interrupt_Num%4)+1;
	uint8 Num_shifted_bits=((INTx*5)+((INTx-1)*3));
	NVIC_REGS.PRIx[Interrupt_Num/4].R|=((Priority)<<Num_shifted_bits);
	SIT_BIT( NVIC_REGS.ENx[Interrupt_Num/32].R,Interrupt_Num%32);
}

void NVIC_Disable_Interrupt(uint8 Interrupt_Num)
{	
	SIT_BIT(NVIC_REGS.DISx[Interrupt_Num/32].R,Interrupt_Num%32);
}

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.c
 *********************************************************************************************************************/
