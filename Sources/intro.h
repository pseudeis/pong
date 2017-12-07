/*
 * intro.h
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#ifndef INTRO_H_
#define INTRO_H_

#include "cpu.h"
#include "events.h"
//#include "SCI.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

typedef struct {
	unsigned char x;
	unsigned char y;
	unsigned char len;
} T_raquette;

void logo(void);
void decor(void);
void decompte(T_raquette* compt);

#endif /* INTRO_H_ */
