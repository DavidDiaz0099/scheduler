/*
 * Leds.c
 *
 *  Created on: Nov 13, 2015
 *      Author: Frank
 */
#include "HAL\Leds.h"

void init_leds (void)
{
	/*initialise outputs for LEDS*/
	SIU.PCR[68].R = 0x0200; /*initialise LED1 from bolero board*/
	SIU.PCR[69].R = 0x0200; /*initialise LED2 from bolero board*/
	SIU.PCR[70].R = 0x0200; /*initialise LED3 from bolero board*/
	SIU.PCR[71].R = 0x0200; /*initialise LED4 from bolero board*/
	SIU.PCR[0].R  = 0x0200; /*initialise PORTA LED1 from bolero board*/
	SIU.PCR[1].R  = 0x0200; /*initialise PORTA LED2 from bolero board*/
	SIU.PCR[2].R  = 0x0200; /*initialise PORTA LED3 from bolero board*/
	SIU.PCR[3].R  = 0x0200; /*initialise PORTA LED4 from bolero board*/
	
	
	SIU.GPDO[68].B.PDO = 0; /*initialise LED1 with 0 for security*/
	SIU.GPDO[69].B.PDO = 0; /*initialise LED2 with 0 for security*/
	SIU.GPDO[70].B.PDO = 0; /*initialise LED3 with 0 for security*/
	SIU.GPDO[71].B.PDO = 0; /*initialise LED4 with 0 for security*/
	SIU.GPDO[0].B.PDO  = 0; /*initialise PORTA LED1 with 0 for security*/
	SIU.GPDO[1].B.PDO  = 0; /*initialise PORTA LED2 with 0 for security*/
	SIU.GPDO[2].B.PDO  = 0; /*initialise PORTA LED3 with 0 for security*/
	SIU.GPDO[3].B.PDO  = 0; /*initialise PORTA LED4 with 0 for security*/

}

