
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   Leds.c $
 * $Revision: 5.0 $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     17/11/2015 $
 */
/*============================================================================*/
/*  DESCRIPTION :                                                             */
/** The file Leds.c initialise LED1 from bolero board and                     */
/*  initialise PORTA LED1 to LED 4 from bolero board                          */
/*                                                                            */
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |       scheduler    |            5.0                  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Leds.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL\Leds.h"

/* Private functions prototypes */
/*============================================================================*/

void init_leds (void);

/* Private functions */
/*============================================================================*/
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

/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */

