
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   Timer.h $
 * $Revision: version $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     15/11/2015 $
 */
/*============================================================================*/
/*  DESCRIPTION :                                                              */
/** The Timer.h file export the configures of STM timer to KERNEL.h file
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
 * $Log: Timer.h  $
  ============================================================================*/
#ifndef TIMER_H_
#define TIMER_H_

/* Includes */
/*============================================================================*/
#include "HAL\stdtypedef.h"
#include "HAL\MPC5606B.h"

/* Exported functions prototypes */
/*============================================================================*/
void STM_config_clock(void);
void function_time(void);


#endif /* TIMER_H_ */

/* Notice: the file ends with a blank new line to avoid compiler warnings */
