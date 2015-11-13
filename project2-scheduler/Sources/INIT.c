/*
 * INIT.c
 *
 *  Created on: Nov 12, 2015
 *      Author: HP 240
 */

#include "INIT.h"
#include "MPC5606B.h"
void INIT()
{
	char count1;
	/* Initialise PLL before turning it on: */

	ME.RUN[0].R = 0x001F0074;       	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL */
	
	ME.RUNPC[0].R = 0x00000010; 	  	/* Peri. Cfg. 0 settings: only run in RUN0 mode */
	ME.PCTL[64].R = 0x0000;         	/* MPC56xxB/S SIUL:  select ME.RUNPC[0] */	
	ME.PCTL[65].R = 0x0000;
	ME.PCTL[66].R = 0x0000;
	ME.PCTL[67].R = 0x0000;
	ME.PCTL[68].R = 0x0000;         	/* MPC56xxB/S SIUL:  select ME.RUNPC[0] */	
	ME.PCTL[69].R = 0x0000;
	ME.PCTL[70].R = 0x0000;
	ME.PCTL[71].R = 0x0000;
										/* Mode Transition to enter RUN0 mode: */
	ME.MCTL.R = 0x40005AF0;         	/* Enter RUN0 Mode & Key */
	ME.MCTL.R = 0x4000A50F;         	/* Enter RUN0 Mode & Inverted Key */  

	
/*  INIT BUTTONS TARGET                      */
	for(count1 = 64; count1 <= 67; count1++)
	{
		SIU.PCR[count1].R = 0x0101;
		
	}
/*********************************************/
	
	
/*  INIT LEDS TARGET                         */
	for(count1 = 68; count1 <= 71; count1++)
		{
			SIU.PCR[count1].R = 0x0201;
			SIU.GPDO[count1].B.PDO = 1;
		}
/*********************************************/
	
	
/*  INIT OUTPUTS IN PORTA                    */
	for(count1 = 0; count1 <= 12; count1++)
			{
				SIU.PCR[count1].R = 0x0201;
				SIU.GPDO[count1].B.PDO = 0;
			}				
/*********************************************/	
}



