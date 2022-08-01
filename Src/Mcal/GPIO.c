/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO.c
 *       Module:  GPIO
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 
 
 #include "GPIO.h"

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION
 *********************************************************************************************************************/
 void GPIO_init(void)
 {
	 for(uint8 i=0;i<Num_Of_Pins_To_Init;i++)
	 {
	 		//Set the Direction of the Pin
		  if(Pin_Config[i].Pin_Direction==INPUT_PIN)
				CLEAR_BIT(GPIO_Config[Pin_Config[i].Pin_Num/8]->GPIODIR,Pin_Config[i].Pin_Num%8);
			else
			{
				SIT_BIT(GPIO_Config[Pin_Config[i].Pin_Num/8]->GPIODIR,Pin_Config[i].Pin_Num%8);
				//Set the OutputCurrent of the Pin
				SIT_BIT(GPIO_Config[Pin_Config[i].Pin_Num/8]->GPIODRxR[Pin_Config[i].Pin_Current],Pin_Config[i].Pin_Num%8);
			}
			
			if(Pin_Config[i].Pin_Internal!=Normal)
			{
				//Enable the Configured Internal Resistor 
				SIT_BIT(GPIO_Config[Pin_Config[i].Pin_Num/8]->GPIO_INTERNAL[Pin_Config[i].Pin_Internal],Pin_Config[i].Pin_Num%8);
			}
			
			//Enable The digital functions for the corresponding pin
			SIT_BIT(GPIO_Config[Pin_Config[i].Pin_Num/8]->GPIODEN,Pin_Config[i].Pin_Num%8);
	 }
 }
 
 

void Dio_WriteChannel(GPIO_PIN_NUMBER Pin_Num,uint8 Level_Type)
{
		GPIO_Config[Pin_Num/8]->GPIODATA[(1<<(Pin_Num%8))]=(Level_Type<<(Pin_Num%8));
}
 
 
 
 
 
 
 
 
 
 
 
 