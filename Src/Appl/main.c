#include "IntCtrl.h"
#include "SysCtrl.h"

void TIMER0A_Handler(void)
{
	
}

int main()
{
	Sys_Ctrl_Init();
  IntCrtl_Init();
	
	
	while(1)
	{
		
	}
	return 0;
}