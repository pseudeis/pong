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
	 * à la position précédante
	 * position négative possible. Collisions à traiter*/
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
	
	/*on vérifie si la balle ne dépasse pas un bord
	 *On vérifie si la balle ne dépasse pas une raquette
	 *Si la balle traverse, on gère le rebond
	 * GROS PAVE INCOMING
	 */
	/*Gestion des collisions bords*/
	if(balle->precy<=100){
		balle->spy=~(balle->spy);
		balle->precy=100;
	}
	
	else if(balle->precy>=2300){
		balle->spy=~(balle->spy);
		balle->precy=2300;
	}



	/*Gestion des collisions raquettes*/
	if(balle->precx<=500){
		balle->precx=500;
		balle->spx=~(balle->spx);
		switch((balle->y)-(j1->y)){
		case 0:
			/*Vite vers le haut*/
			balle->spx*=(13/10);
			balle->spy-=20;
			break;
		case 1:
			/*Un peu vers le haut*/
			balle->spx*=(11/10);
			balle->spy-=10;
			break;
		case 2:
			/*Amorti central*/
			balle->spx*=(9/10);
			break;
		case 3:
			/*Un peu vers le bas*/
			balle->spx*=(11/10);
			balle->spy+=20;
			break;
		case 4:
			/*Vite vers le bas*/
			balle->spx*=(13/10);
			balle->spy+=20;
			break;
		default:
			/*BUUUUUUUUUUT*/
			break;
			
		}
		if(balle->spx>200)
			balle->spx=200;
		if(balle->spy>200)
			balle->spy=200;
		else if(balle->spy>-200)
			balle->spy=-200;
	}
	else if(balle->precx>=7500){
		balle->precx=7500;
		balle->spx=~(balle->spx);
		switch((balle->y)-(j1->y)){
		case 0:
			/*Vite vers le haut*/
			balle->spx*=(13/10);
			balle->spy-=20;
			break;
		case 1:
			/*Un peu vers le haut*/
			balle->spx*=(11/10);
			balle->spy-=10;
			break;
		case 2:
			/*Amorti central*/
			balle->spx*=(9/10);
			break;
		case 3:
			/*Un peu vers le bas*/
			balle->spx*=(11/10);
			balle->spy+=20;
			break;
		case 4:
			/*Vite vers le bas*/
			balle->spx*=(13/10);
			balle->spy+=20;
			break;
		default:
			/*BUUUUUUUUUUT*/
			break;
			
		}
		if(balle->spx>200)
			balle->spx=200;
		if(balle->spy>200)
			balle->spy=200;
		else if(balle->spy>-200)
			balle->spy=-200;
	}

	/* Quand la balle est dans une trajectoire correcte
	 * on actualise sa position sur la console
	 * après avoir arrondit sa position
	 */
	balle->x = balle->precx / 100;
	balle->y = balle->precy / 100;

	if ((old_x != balle->x) || (old_y != balle->y)) {
		move(old_x, old_y);
		putc(' ');
		move(balle->x, balle->y);
		putc('O');
	}

}

