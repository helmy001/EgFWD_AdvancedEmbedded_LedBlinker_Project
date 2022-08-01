/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Lcfg.c
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
 
 
 
 /**********************************************************************************************************************
 * 																							INCLUDES
 *********************************************************************************************************************/
 
 #include "IntCtrl_Cfg.h"
 
 

 /**********************************************************************************************************************
 *  																GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
 
  INT_CONFIG interrupt_config[Num_OfInt_TO_ENABLE]={ 
																											{Timer_0A_16_32_Bit,INT_PRI_XXX_Group0_Sub0},
																											{Timer_1A_16_32_Bit,INT_PRI_XXX_Group1_Sub0},
																											{GPIO_PORT_E,INT_PRI_XXX_Group4_Sub0}								
																									 };
																							
																	