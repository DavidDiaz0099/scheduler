
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   Tasks.c $
 * $Revision: 5.0 $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     15/11/2015 $
 */
/*============================================================================*/
/*  DESCRIPTION :                                                             */
/** This Taks.c file provides the development of the functions that contains 
 *  the tasks
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
 * $Log: Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "Application\Kernel.h"


/* Private functions prototypes */
/*============================================================================*/
void task1(void);

/* Private functions */
/*============================================================================*/

void task1(void)
{
	SIU.GPDO[68].B.PDO ^= 1;       //  toggle led1
	SIU.GPDO[0].B.PDO ^= 1;       //   toggle extern led1 in PORTA
}

void task2(void)
{
	SIU.GPDO[69].B.PDO ^= 1;       //  toggle led2  
	SIU.GPDO[1].B.PDO ^= 1;       //   toggle extern led2 IN PORTA 
}


void task3(void)
{
	SIU.GPDO[70].B.PDO ^= 1;       // toggles led3   
	SIU.GPDO[2].B.PDO ^= 1;       //  toggles extern led3 in PORTA 
}

void task4(void)
{
	SIU.GPDO[71].B.PDO ^= 1;      // toggles led4
SIU.GPDO[3].B.PDO ^= 1;          // toggles extern led4 in PORTA
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
