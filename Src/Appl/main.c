#include "IntCtrl.h"
#include "SysCtrl.h"
#include "GPIO.h"
#include "Gpt.h"

volatile uint32 ON_Time=400000;
volatile uint32 OFF_Time=20000;


void TIMER0A_Handler(void)
{
	Gpt_StopTimer(TIMER_0);
	Clear_Interrupt_Status_Bit(TIMER_0);
	Dio_WriteChannel(PORTF_F2,HIGH);
	Gpt_StartTimer(TIMER_1,ON_Time);
}

void TIMER1A_Handler(void)
{
	Gpt_StopTimer(TIMER_1);
	Clear_Interrupt_Status_Bit(TIMER_1);
	Dio_WriteChannel(PORTF_F2,LOW);
	Gpt_StartTimer(TIMER_0,OFF_Time);
}

int main(void)
{
	Sys_Ctrl_Init();
  IntCrtl_Init();
	GPIO_init();
	Gpt_Init();
	Dio_WriteChannel(PORTF_F2,LOW);
	Gpt_StartTimer(TIMER_0,OFF_Time);
	
	while(1)
	{
		
	}
	return 0;
}