/*
 * balle.c
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#include "bsp.h"
#include "intro.h"
#include "raquette.h"
#include "balle.h"

void init_balle(T_balle* balle) {
	balle->x = 40;
	balle->y = 12;
	balle->spx = 0;
	balle->spy = 0;
	balle->skin = 'O';
	move(balle->x, balle->y);
	putc('O');

}

/*
 * Gestion vectorielle de la vitesse et de la position de la balle.
 */

void move_balle(T_obj* j1, T_obj* j2, T_balle* balle) {

	/*On garde l'ancienne position pour l'effacement*/
	unsigned char old_x = balle->x;
	unsigned char old_y = balle->y;

	/* On additionne le vecteur de vitesse 
	 * � la position pr�c�dante
	 * position n�gative possible. Collisions � traiter*/
	if (balle->spx >= 0) {
		balle->precx += (balle->spx);

	} else {
		balle->precx -= (balle->spx);

	}
	if (balle->spy >= 0) {
		balle->precy += (balle->spy);

	} else {
		balle->precy -= (balle->spy);

	}
	
	/*on v�rifie si la balle ne d�passe pas un bord
	 *On v�rifie si la balle ne d�passe pas une raquette
	 *Si la balle traverse, on g�re le rebond
	 * GROS PAVE INCOMING
	 */
	/*Gestion des collisions bords*/
	if((balle->precy<=100)||(balle->precy>=2300)){
		balle->spy=~(balle->spy);
		if(balle->precy<100)
			balle->precy=100;
		if(balle->precy>2300)
			balle->precy=2300;
	}
	
	/*Gestion des collisions raquettes*/
	if((balle->precx<=100)||(balle->precy>=2300)){
		
	}

	/* Quand la balle est dans une trajectoire correcte
	 * on actualise sa position sur la console
	 */

	/*On arrondit la position de la balle pour l'affichage console*/
	balle->x = balle->precx / 100;
	balle->y = balle->precy / 100;

	if ((old_x != balle->x) || (old_y != balle->y)) {
		move(old_x, old_y);
		putc(' ');
		move(balle->x, balle->y);
		putc('O');
	}

}

