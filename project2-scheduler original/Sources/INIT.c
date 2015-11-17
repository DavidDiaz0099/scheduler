/*
 * INIT.c
 *
 *  Created on: Nov 12, 2015
 *      Author: HP 240
 */

#include "INIT.h"

void INIT(void)
{
		/* Initialise PLL before turning it on: */

	ME.RUN[0].R = 0x001F0074;       	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL  relojes internos*/
	
	ME.RUNPC[0].R = 0x00000010; 	  	/* Peri. Cfg. 0 settings: only run in RUN0 mode   modo donde se ejecuta el codigo */
	ME.PCTL[68].R = 0x0000;         	/* MPC56xxB/S SIUL:  select ME.RUNPC[0]       modo donde se corre la funcion siul */	
										/* Mode Transition to enter RUN0 mode: */
	ME.MCTL.R = 0x40005AF0;         	/* Enter RUN0 Mode & Key  protocolazo =) */
	ME.MCTL.R = 0x4000A50F;         	/* Enter RUN0 Mode & Inverted Key cambios de modos*/  
	
}



