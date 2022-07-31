/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H

#define MCU_HW_H



/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"




/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
 
typedef struct 
{
    uint32 VECACT   :8;
    uint32          :3;
    uint32 RETBASE  :1;
    uint32 VECPEND  :8;
    uint32          :2;
    uint32 ISRPEND  :1;
    uint32 ISRPRE   :1;
    uint32          :1;
    uint32 PENDSTCLR:1;
    uint32 PENDSTSET:1;
    uint32 UNPENDSV :1;
    uint32 PENDSV   :1;
    uint32          :2;
    uint32 NMISET   :1; 
}INTCTRL_BF;



typedef struct 
{
	uint32 VECTRESET  :1;
	uint32 VECTCLRACT :1;
	uint32 SYSRESREQ  :1;
	uint32            :5;
	uint32 PRIGROUP   :3;
	uint32  					:4;
	uint32 ENDIANESS  :1;
	uint32 VECTKEY 	  :16;	
}APINT_BF;



typedef struct
{
	
	uint32  				  :1;
	uint32   SLEEPEXIT:1;
	uint32   SLEEPDEEP:1;
	uint32   					:1;
	uint32   SEVONPEND:1;
	uint32   					:28;
	
}SYSCTRL_BF;


typedef struct
{
	uint32  INTID :8;
	uint32  			:24;
}SWTRIG_BF;


typedef struct
{
	uint32   				:10;
	uint32 	OFFSET	:22;
}VTABLE_BF;




typedef struct
{
	uint32  BASETHR  		:1;
	uint32  MAINPEND 		:1;
	uint32   				 		:1;
	uint32  UNALIGNED 	:1;
	uint32  DIV0 				:1;
	uint32 							:3;
	uint32 BFHFNMIGN		:1;
	uint32 SKALIGN			:1;
	uint32							:22;
	    
}CFGCTRL_BF;


typedef struct
{
	uint32  MEMA 			:1;
	uint32  BUSA			:1;
	uint32   				 	:1;
	uint32  USGA			:1;
	uint32   					:3;
	uint32 	SVCA			:1;
	uint32 	MON				:1;
	uint32 						:1;
	uint32	PNDSV			:1;
	uint32  TICK 			:1;
	uint32  USAGEP		:1;
	uint32  MEMP 			:1;
	uint32  BUSP			:1;
	uint32  SVC 			:1;
	uint32  MEM				:1;
	uint32 	BUS				:1;
	uint32	USAGE			:1;
	uint32 						:13;
	
}SYSHNDCTRL_BF;






typedef struct
{
	uint32  INT0 				:1;
	uint32  INT1 				:1;
	uint32  INT2 				:1;
	uint32  INT3 				:1;
	uint32  INT4 				:1;
	uint32  INT5 				:1;
	uint32  INT6 				:1;
	uint32  INT7 				:1;
	uint32  INT8 				:1;
	uint32  INT9 				:1;
	uint32  INT10 			:1;
	uint32  INT11 			:1;
	uint32  INT12 			:1;
	uint32  INT13 			:1;
	uint32  INT14 			:1;
	uint32  INT15 			:1;
	uint32  INT16 			:1;
	uint32  INT17 			:1;
	uint32  INT18 			:1;
	uint32  INT19 			:1;
	uint32  INT20 			:1;
	uint32  INT21 			:1;
	uint32  INT22 			:1;
	uint32  INT23 			:1;
	uint32  INT24 			:1;
	uint32  INT25 			:1;
	uint32  INT26 			:1;
	uint32  INT27 			:1;
	uint32  INT28 			:1;
	uint32  INT29 			:1;
	uint32  INT30 			:1;
	uint32  INT31 			:1;
	
}NVIC_INT_Reg0_BF;

typedef struct
{
	uint32  INT32 			:1;
	uint32  INT33 			:1;
	uint32  INT34 			:1;
	uint32  INT35 			:1;
	uint32  INT36				:1;
	uint32  INT37 			:1;
	uint32  INT38 			:1;
	uint32  INT39 			:1;
	uint32  INT40 			:1;
	uint32  INT41 			:1;
	uint32  INT42 			:1;
	uint32  INT43 			:1;
	uint32  INT44 			:1;
	uint32  INT45 			:1;
	uint32  INT46 			:1;
	uint32  INT47 			:1;
	uint32  INT48 			:1;
	uint32  INT49 			:1;
	uint32  INT50 			:1;
	uint32  INT51 			:1;
	uint32  INT52 			:1;
	uint32  INT53 			:1;
	uint32  INT54 			:1;
	uint32  INT55 			:1;
	uint32  INT56 			:1;
	uint32  INT57 			:1;
	uint32  INT58 			:1;
	uint32  INT59 			:1;
	uint32  INT60 			:1;
	uint32  INT61 			:1;
	uint32  INT62 			:1;
	uint32  INT63 			:1;
	
}NVIC_INT_Reg1_BF;

typedef struct
{
	uint32  INT64 				:1;
	uint32  INT65 				:1;
	uint32  INT66 				:1;
	uint32  INT67 				:1;
	uint32  INT68 				:1;
	uint32  INT69 				:1;
	uint32  INT70					:1;
	uint32  INT71 				:1;
	uint32  INT72 				:1;
	uint32  INT73 				:1;
	uint32  INT74 				:1;
	uint32  INT75 				:1;
	uint32  INT76 				:1;
	uint32  INT77 				:1;
	uint32  INT78					:1;
	uint32  INT79 				:1;
	uint32  INT80 				:1;
	uint32  INT81 				:1;
	uint32  INT82					:1;
	uint32  INT83					:1;
	uint32  INT84					:1;
	uint32  INT85					:1;
	uint32  INT86 			:1;
	uint32  INT87 			:1;
	uint32  INT88 			:1;
	uint32  INT89 			:1;
	uint32  INT90 			:1;
	uint32  INT91 			:1;
	uint32  INT92 			:1;
	uint32  INT93 			:1;
	uint32  INT94 			:1;
	uint32  INT95 			:1;
	
}NVIC_INT_Reg2_BF;


typedef struct
{
	uint32  INT96 				:1;
	uint32  INT97 				:1;
	uint32  INT98 				:1;
	uint32  INT99 				:1;
	uint32  INT100 				:1;
	uint32  INT101 				:1;
	uint32  INT102				:1;
	uint32  INT103 				:1;
	uint32  INT104 				:1;
	uint32  INT105 				:1;
	uint32  INT106 				:1;
	uint32  INT107 				:1;
	uint32  INT108 				:1;
	uint32  INT109 				:1;
	uint32  INT110				:1;
	uint32  INT111 			:1;
	uint32  INT112 			:1;
	uint32  INT113			:1;
	uint32  INT114			:1;
	uint32  INT115			:1;
	uint32  INT116			:1;
	uint32  INT117			:1;
	uint32  INT118 			:1;
	uint32  INT119 			:1;
	uint32  INT120 			:1;
	uint32  INT121 			:1;
	uint32  INT122 			:1;
	uint32  INT123 			:1;
	uint32  INT124 			:1;
	uint32  INT125 			:1;
	uint32  INT126 			:1;
	uint32  INT127 			:1;
	
}NVIC_INT_Reg3_BF;



typedef struct
{
	uint32  INT128 				:1;
	uint32  INT129 				:1;
	uint32  INT130 				:1;
	uint32  INT131 				:1;
	uint32  INT132 				:1;
	uint32  INT133 				:1;
	uint32  INT134				:1;
	uint32  INT135 				:1;
	uint32  INT136 				:1;
	uint32  INT137 				:1;
	uint32  INT138 				:1;
	uint32  INT 		  		:21;

}NVIC_INT_Reg4_BF;



typedef struct
{
	uint32   			:5;
	uint32 	INTA	:3;
	uint32   			:5;
	uint32 	INTB	:3;
	uint32   			:5;
	uint32 	INTC	:3;
	uint32   			:5;
	uint32 	INTD	:3;

}NVIC_INTERRUPT_PIRx_BF;

typedef struct
{
	uint32   			:5;
	uint32 	MEM		:3;
	uint32   			:5;
	uint32 	BUS 	:3;
	uint32   			:5;
	uint32 	USAGE	:3;
	uint32   			:8;
}SCB_SYSPRI1_BF;


typedef struct
{

	uint32 				:29;
	uint32   SVC	:3;
}SCB_SYSPRI2_BF;



typedef struct
{
	uint32   				:5;
	uint32 	DEBUG		:3;
	uint32   				:13;
	uint32 	PENDSV 	:3;
	uint32   				:5;
	uint32 	TICK		:3;

}SCB_SYSPRI3_BF;







typedef struct
{
	uint32 MOSCDIS:1 ;
	uint32 				:3;
	uint32 OSCSRC :2;
	uint32 XTAL 	:5;
	uint32 BYPASS	:1;
	uint32 				:1;
	uint32 PWRDN	:1;
	uint32 				:3;
	uint32 PWMDIV	:3;
	uint32 USEPWMDIV :1;
	uint32 					 :1;
	uint32 USESYSDIV :1;
	uint32 SYSDIV		 :4;
	uint32 ACG 			 :1;
	uint32 					 :4;
	
}RCC_BF;

typedef struct
{
	uint32 				 :4;
	uint32 OSCSRC2 :3;
	uint32 			 		:4;
	uint32 BYPASS2	:1;
	uint32 					:1;
	uint32 PWRDN2		:1;
	uint32 USBPWRDN	:1;
	uint32 					:7;
	uint32 SYSDIV2LSB	 :1;
	uint32 SYSDIV2		 :6;
	uint32 						 :1;
	uint32 DIV400 		 :1;
	uint32 USERCC2		 :1;
	
}RCC2_BF;




typedef struct
{
	uint32  CVAL		:1;
	uint32 	MOSCIM	:1;
	uint32  NOXTAL  :1;
	uint32 					:29;

}MOSCCTL_BF;



typedef union
{
	volatile uint32 R;
	volatile MOSCCTL_BF B;
}MOSCCTL_Tag;


typedef union
{
	volatile uint32 R;
	volatile RCC_BF B;
}RCC2_Tag;

typedef union
{
	volatile uint32 R;
	volatile RCC_BF B;
}RCC_Tag;
typedef union
{
	uint32 R;
	NVIC_INTERRUPT_PIRx_BF B;
	
}NVIC_INTERRUPT_PIRx_Tag;

typedef union
{
	uint32 R;
	NVIC_INT_Reg0_BF B;
	
}NVIC_INT_Reg0_Tag;


typedef union
{
	uint32 R;
	NVIC_INT_Reg1_BF B;
}NVIC_INT_Reg1_Tag;


typedef union
{
	uint32 R;
	NVIC_INT_Reg2_BF B;
}NVIC_INT_Reg2_Tag;


typedef union
{
	uint32 R;
	NVIC_INT_Reg3_BF B;
}NVIC_INT_Reg3_Tag;


typedef union
{
	uint32 R;
	NVIC_INT_Reg4_BF B;
}NVIC_INT_Reg4_Tag;


typedef union
{
	uint32 R;
	SYSHNDCTRL_BF B;
}SYSHNDCTRL_Tag;


typedef union	
{
	
	uint32 R;
	CFGCTRL_BF B;
	
}CFGCTRL_Tag;


typedef union	
{
	uint32 R;
	VTABLE_BF B;
}VTABLE_Tag;


typedef union	
{
	uint32 R;
	SWTRIG_BF B;
}SWTRIG_Tag;

typedef union	
{
	uint32 R;
	SYSCTRL_BF B;
}SYSCTRL_Tag;

typedef union
{
	uint32 R;
	APINT_BF B;
}APINT_Tag;



typedef union 
{
    uint32 R;
    INTCTRL_BF B;
	
}INTCTRL_Tag;




















typedef struct
{
		NVIC_INT_Reg0_Tag ENx[5];
	  volatile uint32 RESERVED0[27];
	  NVIC_INT_Reg0_Tag DISx[5];
	  volatile uint32 RESERVED1[27];
	  NVIC_INT_Reg0_Tag PENDx[5];
	  volatile uint32 RESERVED2[27];
		NVIC_INT_Reg0_Tag UNPENDx[5];
	  volatile uint32 RESERVED3[27];
		NVIC_INT_Reg0_Tag ACTIVEx[5];
		volatile uint32 RESERVED4[59];
		NVIC_INTERRUPT_PIRx_Tag PRIx[35];
	  volatile uint32 RESERVED5[669];
		SWTRIG_Tag SWTRIG;
	
}NVIC_Registers;



/**********************************************************************************************************************
 *  																			GLOBAL CONSTANT MACROS																											*
 *********************************************************************************************************************/



#define CORTEXM4_PERI_BASE_ADDRESS                         0xE000E000
#define APINT_REG_KEY																			 0x05FA0000


#define NVIC_REGS												  (*((volatile NVIC_Registers*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))
#define SCB_INTCTRL                       (*((volatile INTCTRL_Tag*)   (CORTEXM4_PERI_BASE_ADDRESS+0xD04)))
#define SYSCTRL                           (*((volatile SYSCTRL_Tag*)   (CORTEXM4_PERI_BASE_ADDRESS+0xD10)))
#define NVIC_SWTRIG                       (*((volatile SWTRIG_Tag*)    (CORTEXM4_PERI_BASE_ADDRESS+0xF00)))
#define SCB_VTABLE										  	(*((volatile VTABLE_Tag*)    (CORTEXM4_PERI_BASE_ADDRESS+0xD08)))
#define SCB_APINT											    (*((volatile APINT_Tag*)     (CORTEXM4_PERI_BASE_ADDRESS+0xD0C)))
#define CFGCTRL											    	(*((volatile CFGCTRL_Tag*)   (CORTEXM4_PERI_BASE_ADDRESS+0xD14)))
#define SCB_SYSHNDCTRL										(*((volatile SYSHNDCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD24)))


// The ENx register enables interrupts and shows which interrupts are enabled
#define	NVIC_EN0											  (*((volatile NVIC_INT_Reg0_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))
#define	NVIC_EN1											  (*((volatile NVIC_INT_Reg1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x104)))
#define	NVIC_EN2										    (*((volatile NVIC_INT_Reg2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x108)))
#define	NVIC_EN3					     			    (*((volatile NVIC_INT_Reg3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x10C)))
#define	NVIC_EN4											  (*((volatile NVIC_INT_Reg4_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x110)))
	
// The DIS register disables interrupts
#define	NVIC_DIS0		  								    (*((volatile NVIC_INT_Reg0_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x180)))
#define	NVIC_DIS1	  										  (*((volatile NVIC_INT_Reg1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x184)))
#define	NVIC_DIS2		  									  (*((volatile NVIC_INT_Reg2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x188)))
#define	NVIC_DIS3		  									  (*((volatile NVIC_INT_Reg3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x18C)))
#define	NVIC_DIS4		  									  (*((volatile NVIC_INT_Reg4_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x190)))
	
//  PEND register forces interrupts into the pending state and shows which interrupts are pending
#define	NVIC_PEND0		  														 (*((volatile NVIC_INT_Reg0_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x200)))
#define	NVIC_PEND1	  															 (*((volatile NVIC_INT_Reg1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x204)))
#define	NVIC_PEND2		  														 (*((volatile NVIC_INT_Reg2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x208)))
#define	NVIC_PEND3		  														 (*((volatile NVIC_INT_Reg3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x20C)))
#define	NVIC_PEND4		  														 (*((volatile NVIC_INT_Reg4_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x210)))
	
// The UNPEND4 register shows which interrupts are pending and removes the pending state from interrupts
#define	NVIC_UNPEND0		  													 (*((volatile NVIC_INT_Reg0_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x280)))
#define	NVIC_UNPEND1	  														 (*((volatile NVIC_INT_Reg1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x284)))
#define	NVIC_UNPEND2		  													 (*((volatile NVIC_INT_Reg2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x288)))
#define	NVIC_UNPEND3		  													 (*((volatile NVIC_INT_Reg3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x28C)))
#define	NVIC_UNPEND4		  													 (*((volatile NVIC_INT_Reg4_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x290)))

// The ACTIVE0 register indicates which interrupts are active. Bit 0 corresponds to Interrupt 0 
#define	NVIC_ACTIVE0		  													 (*((volatile NVIC_INT_Reg0_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x300)))
#define NVIC_ACTIVE1	  														 (*((volatile NVIC_INT_Reg1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x304)))
#define	NVIC_ACTIVE2		  													 (*((volatile NVIC_INT_Reg2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x308)))
#define	NVIC_ACTIVE3		  													 (*((volatile NVIC_INT_Reg3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x30C)))
#define	NVIC_ACTIVE4		  													 (*((volatile NVIC_INT_Reg4_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x310)))
	
// The PRIn registers (see also page 154) provide 3-bit priority fields for each interrupt
#define NVIC_PRI0											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x400)))
#define NVIC_PRI1												(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x404)))
#define NVIC_PRI2											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x408)))	
#define NVIC_PRI3											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x40C)))
#define NVIC_PRI4											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x410)))
#define NVIC_PRI5											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x414)))
#define NVIC_PRI6											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x418)))
#define NVIC_PRI7											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x41C)))
#define NVIC_PRI8											  (*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x420)))
#define NVIC_PRI9										  	(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x424)))
#define NVIC_PRI10											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x428)))
#define NVIC_PRI11											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x42C)))
#define NVIC_PRI12											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x430)))
#define NVIC_PRI13											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x434)))
#define NVIC_PRI14											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x438)))
#define NVIC_PRI15											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x43C)))
#define NVIC_PRI16											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x440)))
#define NVIC_PRI17											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x444)))
#define NVIC_PRI18											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x448)))	
#define NVIC_PRI19											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x44C)))
#define NVIC_PRI20											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x450)))
#define NVIC_PRI21											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x454)))
#define NVIC_PRI22											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x458)))
#define NVIC_PRI23											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x45C)))
#define NVIC_PRI24											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x460)))
#define NVIC_PRI25											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x464)))
#define NVIC_PRI26											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x468)))
#define NVIC_PRI27											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x46C)))
#define NVIC_PRI28											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x470)))
#define NVIC_PRI29											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x474)))
#define NVIC_PRI30											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x478)))
#define NVIC_PRI31											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x47C)))
#define NVIC_PRI32											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x480)))
#define NVIC_PRI33											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x484)))
#define NVIC_PRI34											(*((volatile NVIC_INTERRUPT_PIRx_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0x488)))	
	
//The SYSPRI1 register configures the priority level, 0 to 7 of the usage fault, bus fault, and memory management fault exception handlers
#define SCB_SYSPRI1											(*((volatile SCB_SYSPRI1_BF*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18)))
#define SCB_SYSPRI2											(*((volatile SCB_SYSPRI2_BF*)(CORTEXM4_PERI_BASE_ADDRESS+0xD1C)))
#define SCB_SYSPRI3											(*((volatile SCB_SYSPRI3_BF*)(CORTEXM4_PERI_BASE_ADDRESS+0xD20)))


/********************************************************************
 *  									SYSTEM CONTROL 																*
 *******************************************************************/

//RESET cause (RESC ) register is set with the reset casue
//Watchdog Timer Software Reset with SRWD register 
//The entire microcontroller, including the core, can be reset by software by setting the SYSRESREQ bit in the (APINT) register
//The core only can be reset by software by setting the VECTRESET bit in the APINT register
//The Watchdog module time-out interrupt when the INTTYPE bit in the Watchdog Control (WDTCTL) register is set


#define SYSTEM_CONTROL_REGS_BASE  								    0x400FE000
#define SYS_CTRL_RCC  															 (*((volatile RCC_Tag*)(SYSTEM_CONTROL_REGS_BASE+0x060)))
#define SYS_CTRL_RCC2																 (*((volatile RCC2_Tag*)(SYSTEM_CONTROL_REGS_BASE+0x070)))
#define SYS_CTRL_MOSCCTL													 	 (*((volatile MOSCCTL_Tag*)(SYSTEM_CONTROL_REGS_BASE+0x07C)))
#define SYS_CTRL_RUN_MODE_CLK							  				 ((volatile uint32*)(SYSTEM_CONTROL_REGS_BASE+0x600))
#define SYS_CTRL_PRESENT_REGS												 ((volatile uint32*)(SYSTEM_CONTROL_REGS_BASE+0x300))

typedef enum
{
	Watch_dog_Present=0 ,
	Timer_16_32_Present ,
	GPIO_Present				,
	MPU_Present					,
	Hibernation_Present=5	,
	Uart_Present				,
	SSI_Present					,
	I2C_Present					,
	Serial_Bus_Present=10	,
	CAN_Present 			=13	,
	ADC_Present					,
	Analog_Comp_Present	,
	PWM_Present					,
	QEI_Present					,
	EEPROM_Present		=22	,
	Timer_32_64_Present 	,
	
}Peripherals_Present_Types;


/********************************************************************
 *  									GPIO																					*
 *******************************************************************/
 

typedef struct
{
	volatile uint32 GPIODATA[256];
	volatile uint32 GPIODIR;
	volatile uint32 GPIOIS;
	volatile uint32 GPIOIBE;
	volatile uint32 GPIOIEV;
	volatile uint32 GPIOIM;
	volatile uint32 GPIORIS;
	volatile uint32 GPIOMIS;
	volatile uint32 GPIOICR;
	volatile uint32 GPIOAFSEL;
	volatile uint32 Reserved[55];
	volatile uint32 GPIODRxR[3];
	volatile uint32 GPIO_INTERNAL[3];
	volatile uint32	GPIOSLR ;
	volatile uint32 GPIODEN;
	volatile uint32 GPIOLOCK;
	volatile uint32 GPIOCR;
	volatile uint32 GPIOAMSEL;
	volatile uint32 GPIOPCTL;
	volatile uint32 GPIOADCCTL;
	volatile uint32 GPIODMACTL;	
}GPIO_REG_MAP;


#define GPIO_PORTA										((volatile GPIO_REG_MAP*)0x40004000)	
#define GPIO_PORTB										((volatile GPIO_REG_MAP*)0x40005000)	
#define GPIO_PORTC										((volatile GPIO_REG_MAP*)0x40006000)	
#define GPIO_PORTD										((volatile GPIO_REG_MAP*)0x40007000)	
#define GPIO_PORTE										((volatile GPIO_REG_MAP*)0x40024000)	
#define GPIO_PORTF										((volatile GPIO_REG_MAP*)0x40025000)	

/********************************************************************
 *  									Genral Purpose Timers													*
 *******************************************************************/
typedef struct
{
	volatile uint32 GPTMCFG;
	volatile uint32 GPTMTAMR;
	volatile uint32 GPTMTBMR;
	volatile uint32 GPTMCTL;
	volatile uint32 GPTMSYNC;
	volatile uint32 RESERVED1;
	volatile uint32 GPTMIMR;
	volatile uint32 GPTMRIS;
	volatile uint32 GPTMMIS;
	volatile uint32 GPTMICR;
	volatile uint32 GPTMTAILR;
	volatile uint32 GPTMTBILR;
	volatile uint32 GPTMTAMATCHR;
	volatile uint32 GPTMTBMATCHR;
	volatile uint32	GPTMTAPR ;
	volatile uint32 GPTMTBPR;
	volatile uint32 GPTMTAPMR;
	volatile uint32 GPTMTBPMR;
	volatile uint32 GPTMTAR;
	volatile uint32 GPTMTBR;
	volatile uint32 GPTMTAV;
	volatile uint32 GPTMTBV;	
	volatile uint32 GPTMRTCPD ;
	volatile uint32 GPTMTAPS;
	volatile uint32 GPTMTBPS ;
	volatile uint32 GPTMTAPV;
	volatile uint32 GPTMTBPV;
}TIMERS_REG_MAP;


#define TIMER0_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40030000))
#define TIMER1_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40031000))
#define TIMER2_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40032000))
#define TIMER3_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40033000))
#define TIMER4_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40034000))
#define TIMER5_16_32_BIT      ((volatile TIMERS_REG_MAP*)(0x40035000))
	
#define WTIMER0_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x40036000))
#define WTIMER1_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x40037000))
#define WTIMER2_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x4004C000))
#define WTIMER3_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x4004D000))
#define WTIMER4_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x4004E000))
#define WTIMER5_32_64_BIT      ((volatile TIMERS_REG_MAP*)(0x4004F000))


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/
