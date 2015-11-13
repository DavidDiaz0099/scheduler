/*
 * tasks.h
 *
 *  Created on: Nov 13, 2015
 *      Author: HP 240
 */

#ifndef TASKS_H_
#define TASKS_H_

	typedef enum{
		/*==========0*/
		E_TSK_TASK0_10ms,        //
		E_TSK_TASK1_100ms,      //
		E_TSK_TASK2_200ms,     //
		/*=============*/
		E_TSK_N_OF
	}E_TASKS;

	
	void tasks0();
	void tasks1();
	void tasks2();
	void tasks3();
	
	/*
const E_TASKS num[	E_TSK_N_OF] =
{
		{E_TSK_TASK0_10ms,  0, 10 },
		{E_TSK_TASK1_100ms, 1, 100},
		{E_TSK_TASK2_200ms, 2, 200},
		
};*/
	
#endif /* TASKS_H_ */

	
