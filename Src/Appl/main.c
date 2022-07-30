#include "IntCtrl.h"
#include "SysCtrl.h"
#include "GPIO.h"

void TIMER0A_Handler(void)
{
	
	
	
}


int main(void)
{
	Sys_Ctrl_Init();
  IntCrtl_Init();
	GPIO_init();
	Dio_WriteChannel(PORTF_F1,HIGH);
	
	while(1)
	{
		
	}
	return 0;
}