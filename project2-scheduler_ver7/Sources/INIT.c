/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   INIT.c $
 * $Revision: 5.0 $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     15/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** The INIT file is the Initialise PLL before turning it on.				  */	 
/**																			  */
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
 * $Log: INIT.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "MAL\INIT.h"
/* Private functions prototypes */
/*============================================================================*/
void INIT(void);
/* Private functions */
/*============================================================================*/

void INIT(void)
{
		/* Initialise PLL before turning it on: */

	ME.RUN[0].R = 0x001F0074;       	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL  relojes internos*/
	
	ME.RUNPC[0].R = 0x00000010; 	  	/* Peri. Cfg. 0 settings: only run in RUN0 mode   modo donde se ejecuta el codigo */
	ME.PCTL[68].R = 0x0000;         	/* MPC56xxB/S SIUL:  select ME.RUNPC[0]       modo donde se corre la funcion siul */	
										/* Mode Transition to enter RUN0 mode: */
	ME.MCTL.R = 0x40005AF0;         	/* Enter RUN0 Mode & Key  protoco */
	ME.MCTL.R = 0x4000A50F;         	/* Enter RUN0 Mode & Inverted Key cambios de modos*/  
	
}

 /* Notice: the file ends with a blank new line to avoid compiler warnings */


