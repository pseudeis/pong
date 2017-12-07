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

void decor(void);
void decompte(void);
void write_raquette_up(T_raquette*);
void write_raquette_down(T_raquette*);
void clear_raquette_up(T_raquette*);
void clear_raquette_down(T_raquette*);

#endif /* INTRO_H_ */
