/*
 * STM.c
 *
 *  Created on: Nov 12, 2015
 *      Author: HP 240
 */


#include "MAL\STM.h"
#include "HAL\MPC5606B.h"

void STM_config(void){
	STM.CNT.R = 0; 
	STM.CH[0].CMP.R     = 0x9C401;   //1msec
	STM.CH[0].CCR.B.CEN = 1;
	STM.CH[1].CMP.R     = 0x186A001; //400ms
	STM.CH[1].CCR.B.CEN = 1;
	STM.CH[2].CMP.R     = 0x1E84801; //500ms
	STM.CH[2].CCR.B.CEN = 1;
	STM.CH[3].CMP.R     = 0x1E84801; //5 s
	STM.CH[3].CCR.B.CEN = 1;
	STM.CR.B.FRZ        = 0;
	STM.CR.B.CPS        = 0;
	STM.CR.B.TEN        = 1;
	
}
