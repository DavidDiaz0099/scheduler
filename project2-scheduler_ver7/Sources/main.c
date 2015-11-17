
/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: main.c $
 * $Revision:  5.0 $
 * $Author: FRANCISCO JAVIER QUIRARTE PELAYO $
 * 			DAVID ANTONIO DIAZ RAMIREZ
 * $Date:   15/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :	Scheduling refers to making a sequence of time execution 
 * decisions at specific intervals, this decision that is made is based on a 
 * predictable algorithm.  An application that does not need its current 
 * allocation leaves the resource available for another application's use. 
 * The underlying algorithm defines how the term “controlled” is interpreted, 
 * in some instances, the scheduling algorithm might guarantee that all 
 * applications have some access to the resource. The Binary Progression 
 * Scheduler (BPS) manages the access to the CPU resources in a controlled way. 
 *                                                               */
/** SHORT DESCRIPTION: The file main.c contain the all headers implemented by 
 *  the scheduler module thought contain the all functions required for the 
 *  system
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
/*                     |  scheduler         |          5.0                    */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: main.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "Application\Kernel.h"        //contain all headers

/* Constants and types  */
/*============================================================================*/

typedef void(*FuncPtr)(void );    //pointer to fun
extern tickflag;                 //if tickflag is activated increase the counter of tasks

/* Variables */
/*============================================================================*/
int periodo;          
int offset;
char indice;
int contador_de_tareas[E_ISK_TASK_NUM];  //total number of tasks

/* Private functions prototypes */
/*============================================================================*/
void scheduler(void);          //function of the logic of the system

Tasks();     //add the number of tasks

/* Inline functions */
/*============================================================================*/
typedef struct{              //structure contain the members
	
	FuncPtr puntero;       //pointer to function task
	int periodo;          //period
	int offset;          //offset
	
} S_TASKS;


const S_TASKS TASK_LIST[E_ISK_TASK_NUM]={
		
	/*  Task#               Offset    Period */
		{task1,               200,       1},  
		{task2,               400,       3},
		{task3,               800,       5},  
		{task4,             16000,       17}
	/*        .                  .         .*/	
	/*  Task(n)          Offset(n)  Period(n)*/			
};

/* Private functions */
/*=================================================================================================*/

void scheduler(void){     //prototype of logic of the system

char indice;
int contador_de_tareas[E_ISK_TASK_NUM];                                //total number of tasks

for (indice=0; indice<E_ISK_TASK_NUM; indice++)	{                    //control of number of tasks
	contador_de_tareas [indice]=TASK_LIST[indice].offset;        
}
	while (1){                                                     //loop forever
	 if (tickflag){                                               //if tick flag is activated
		 
		 tickflag=0;                                            //reset flag 
		 
		 for(indice=0; indice<E_ISK_TASK_NUM; indice++){      //control of number of tasks
			 if (contador_de_tareas[indice]>0){              //if contador_de_tareas is higher tahn 0 
				
				 contador_de_tareas[indice] -= 1;          //contador_de_tareas decrement
			 }
			 else{
				 
				 contador_de_tareas[indice]=TASK_LIST[indice].periodo;
				 TASK_LIST[indice].puntero();
			}
		   }
		  }
	 else
	 {
		 //do_nothing
	      }
	}
}

/* Exported functions */
/*===============================================================================================*/
int main(void) {
	INIT();                    //initialises the system modes 
	init_leds ();             //config LEDs on board and port(X)
	STM_config_clock();      //Initialise channel 0 STM
	INTC.CPR.B.PRI = 0;     //reset the interrupt handler
	INTC_InstallINTCInterruptHandler(function_time,30,1);  
	scheduler();
	
}

 /* Notice: the file ends with a blank new line to avoid compiler warnings */


