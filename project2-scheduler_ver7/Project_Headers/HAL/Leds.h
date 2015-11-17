
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source:   Leds.h $
 * $Revision: version $
 * $Author:   FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			  DAVID ANTONIO DIAZ RAMIREZ
 * $Date:     15/11/2015 $
 */
/*============================================================================*/
/*  DESCRIPTION :                                                              */
/** This file Leds.h export the configures of the leds on board and PORTA
 *  to KERNEL.h file
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
 * $Log: Leds.h  $
  ============================================================================*/
#ifndef LEDS_H_
#define LEDS_H_


/* Includes */
/*============================================================================*/

#include "HAL\MPC5606B.h"

/* Exported functions prototypes */
/*============================================================================*/

void init_leds (void);


#endif /* LEDS_H_ */

/* Notice: the file ends with a blank new line to avoid compiler warnings */
