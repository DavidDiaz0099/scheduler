/*
 * Kernel.h
 *
 *  Created on: Nov 16, 2015
 *      Author: HP 240
 */

#ifndef KERNEL_H_
#define KERNEL_H_

/*All headers of software*/

//Mal headers
#include "Mal\Timer.h"
#include "Mal\IntcInterrupts.h"
#include "Mal\Exceptions.h"
#include "Mal\INIT.h"
#include "Mal\Tasks.h"


//Hal headers
#include "Hal\typedefs.h"
#include "Hal\stdtypedef.h"
#include "Hal\MPC5606B.h"
#include "Hal\MPC5606B_HWInit.h"
#include "Hal\Leds.h"


#endif /* KERNEL_H_ */
