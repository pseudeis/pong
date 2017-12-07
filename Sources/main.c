/* ###################################################################
 **     Filename    : main.c
 **     Project     : manette
 **     Processor   : MC9S08QE8CLC
 **     Version     : Driver 01.12
 **     Compiler    : CodeWarrior HCS08 C Compiler
 **     Date/Time   : 2017-11-17, 14:03, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.12
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */

/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "PTA.h"
#include "PTD.h"
#include "SCI.h"
#include "bsp.h"
#include "intro.h"
#include "raquette.h"
#include "balle.h"
/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

void main(void) {
	/* Write your local variable definition here */

	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/


	/* Write your code here */
	/* For example: for(;;) { } */
	/*
	 * INCLURE LOGO ICI
	 */

	
	/*Appel de la fonction qui trace les bords dans move.c*/
	decor();

	/*Appel du compte 0->99 dans move.c*/
	decompte();

	
	
	
	/*
	 *Ce bloc on s'en fout un peu
	 *Ce je l'ai fait pour me marrer. Mais il est inétressant à comprendre. 
	 */
	unit = 5;
	dizaine = 0;
	move(compt.x - 1, compt.y);
	putc(dizaine +'0');
	while (1) {
		move(compt.x, compt.y);
		putc(unit-- +'0');
		delay(10000);
		if ((!PTAD_PTAD2) || unit == 0) {
			delay(10000);
			move(compt.x, compt.y);
			putc(' ');
			move(compt.x - 1, compt.y);
			putc(' ');
			break;
		}
	}

	for (;;) {

		move_raquette();
		move_balle();

	}

	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
	/*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
#ifdef PEX_RTOS_START
	PEX_RTOS_START(); /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif
	/*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
 ** @}
 */
/*
 ** ###################################################################
 **
 **     This file was created by Processor Expert 10.3 [05.09]
 **     for the Freescale HCS08 series of microcontrollers.
 **
 ** ###################################################################
 */
