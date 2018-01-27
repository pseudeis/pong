/*
 * raquette.h
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#ifndef RAQUETTE_H_
#define RAQUETTE_H_

void init_raquette(T_obj* raquette);
void init_score(void);
void move_raquette1(T_obj* j1);
void move_raquette2(T_obj* j2);

extern T_obj joueur_1;
extern T_obj joueur_2;



#endif /* RAQUETTE_H_ */
