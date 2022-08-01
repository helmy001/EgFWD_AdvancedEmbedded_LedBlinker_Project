#include "IntCtrl.h"
#include "SysCtrl.h"
#include "GPIO.h"
#include "Gpt.h"

void TIMER0A_Handler(void)
{
	
	
	
}

void TIMER1A_Handler(void)
{
	
}

int main(void)
{
	Sys_Ctrl_Init();
  IntCrtl_Init();
	GPIO_init();
	Gpt_Init();
	Gpt_StartTimer(TIMER_0,1000);
	Gpt_StartTimer(TIMER_1,1000);
	Dio_WriteChannel(PORTF_F1,HIGH);
	
	while(1)
	{
		
	}
	return 0;
}