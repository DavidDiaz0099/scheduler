
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   Timer.c $
 * $Revision: 5.0 $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     15/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** This file Timer.c in the function_time is configured the STM timer flag
 *  and counter in 1 ms.
 *  In the STM_config_clock function is also configured 
 *  the channel 0 of STM timer to active the tickflag. 
*/
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
 * $Log: Timer.c  $ 
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "MAL\Timer.h"

/* Variables */
/*============================================================================*/
int tickflag=0;

/* Private functions prototypes */
/*============================================================================*/
void STM_config_clock(void);
void function_time(void);
/* Private functions */
/*============================================================================*/
void STM_config_clock(void)
{
	STM.CNT.R = 0;              //initialise counter 
	STM.CH[0].CMP.R = 0xFA00;  //0xFA00 = 1 millisecond
	STM.CH[0].CCR.B.CEN = 1;
	STM.CR.B.FRZ = 0; //on debugging mode you can see the internal clock
	STM.CR.B.CPS = 0;
	STM.CR.B.TEN = 1;
}

void function_time(void){
	if(STM.CH[0].CIR.B.CIF){
	    STM.CH[0].CIR.B.CIF=1; //resets the flag on channel 0
		tickflag=1;  //rise the flag each 1 millisecond
		STM.CNT.R=0; // resets the counter
		
	}
}


/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */


