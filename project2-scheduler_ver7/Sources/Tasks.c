/*
 * Tasks.c
 *
 *  Created on: Nov 16, 2015
 *      Author: HP 240
 */

#include "Application\Kernel.h"

void task1(void)
{
	SIU.GPDO[68].B.PDO ^= 1;//led1 on  si esta apagado que lo prenda y viceversa
	SIU.GPDO[0].B.PDO ^= 1;
}

void task2(void)
{
	SIU.GPDO[69].B.PDO ^= 1;//led2 on  si esta apagado que lo prenda y viceversa
	SIU.GPDO[1].B.PDO ^= 1;
}


void task3(void)
{
	SIU.GPDO[70].B.PDO ^= 1;//led3 on  si esta apagado que lo prenda y viceversa
	SIU.GPDO[2].B.PDO ^= 1;
}

void task4(void)
{
	SIU.GPDO[71].B.PDO ^= 1;//led4 on  si esta apagado que lo prenda y viceversa
SIU.GPDO[3].B.PDO ^= 1;
}





