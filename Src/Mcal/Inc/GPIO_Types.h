/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_Types.h
 *       Module:  GPIO_Types
 *
 *  Description:  ----
 *  
 *********************************************************************************************************************/





/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
 #ifndef GPIO_Types_H
 #define GPIO_Types_H
 
 #include "Mcu_Hw.h"


 

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
 
 #define LOW 0
 #define HIGH 1
 #define Num_Of_Ports 6
 
 typedef enum
 {
	Current_2mA=0,
	Current_4mA,
	Current_8mA
 }PIN_CURRENT;
 
 
 typedef enum
 {
	Open_Drain=0	,
	Pull_Up 	,
	Pull_Down	,
	Normal 
 }PIN_INTERNAL_CONFIG;
 
 typedef enum
 {	
	 PORTA_A0 =0,
	 PORTA_A1	,
	 PORTA_A2	,
	 PORTA_A3	,
	 PORTA_A4	,
	 PORTA_A5	,
	 PORTA_A6	,
	 PORTA_A7	,
	 PORTB_B0 ,
	 PORTB_B1	,
	 PORTB_B2	,
	 PORTB_B3	,
	 PORTB_B4	,
	 PORTB_B5	,
	 PORTB_B6	,
	 PORTB_B7	,
	 PORTC_C0 ,
	 PORTC_C1	,
	 PORTC_C2	,
	 PORTC_C3	,
	 PORTC_C4	,
	 PORTC_C5	,
	 PORTC_C6	,
	 PORTC_C7	,
	 PORTD_D0 ,
	 PORTD_D1	,
	 PORTD_D2	,
	 PORTD_D3	,
	 PORTD_D4	,
	 PORTD_D5	,
	 PORTD_D6	,
	 PORTD_D7	,
	 PORTE_E0 ,
	 PORTE_E1	,
	 PORTE_E2	,
	 PORTE_E3	,
	 PORTE_E4	,
	 PORTE_E5	,
	 PORTE_E6	,
	 PORTE_E7	,
	 PORTF_F0 ,
	 PORTF_F1	,
	 PORTF_F2	,
	 PORTF_F3	,
	 PORTF_F4	,
	 PORTF_F5	,
	 PORTF_F6	,
	 PORTF_F7	,
}GPIO_PIN_NUMBER;


typedef enum
{
	INPUT_PIN=0	,
	OUTPUT_PIN=1
}PIN_DIRECTION;

typedef struct
{
	volatile uint8    					 Pin_Num;
	volatile PIN_DIRECTION	  	 Pin_Direction;
	volatile PIN_CURRENT 			   Pin_Current;
	volatile PIN_INTERNAL_CONFIG Pin_Internal;
}PIN_CONFIG;



 #endif
 