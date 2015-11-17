
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Tasks.h $
 * $Revision: version $
 * $Author: FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			DAVID ANTONIO DIAZ RAMIREZ
 * $Date:   15/11/2015 $
 */
/*============================================================================*/
/*  DESCRIPTION :                                                             */
/** This file Tasks.h export the number of tasks implemented for the customer 
 *  
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
 * $Log:  Tasks.h  $
  ============================================================================*/

#ifndef TASKS_H_
#define TASKS_H_

/* Constants and types */
/*============================================================================*/

typedef enum {
/*  add or put off the number of tasks */
	E_ISK_TASK0,
	E_ISK_TASK1,
	E_ISK_TASK2,
	E_ISK_TASK3,
	
	/*DONT MODIFY THIS LINE*/	
	E_ISK_TASK_NUM
} tareas;

/* Exported functions prototypes */
/*============================================================================*/

void task1(void);
void task2(void);
void task3(void);
void task4(void);

/* Notice: the file ends with a blank new line to avoid compiler warnings */

#endif /* TASKS_H_ */
