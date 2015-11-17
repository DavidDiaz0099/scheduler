

#include "Application\Kernel.h"

typedef void(*FuncPtr)(void );    //pointer to fun
extern tickflag;                 //if tickflag is activated increase the counter of tasks

void scheduler(void);          //function of the logic of the system

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

Tasks();     //add the number of tasks


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


int main(void) {
	INIT();                    //initialises the system modes (reloj interno, modos de ejecucion)
	init_leds ();             //config LEDs on board and port(X)
	STM_config_clock();      //Initialise channel 0 STM
	INTC.CPR.B.PRI = 0;     //reset the interrupt handler
	INTC_InstallINTCInterruptHandler(function_time,30,1);  
	scheduler();
	
}



