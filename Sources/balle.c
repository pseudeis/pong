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
	balle->x = LARGEUR/2;
	balle->y = HAUTEUR/2;
	balle->precx = LARGEURP/2;
	balle->precy = HAUTEURP/2;
	balle->skin = 'O';
	move(balle->x, balle->y);
	putc('O');
	balle->spx = 200;
	balle->spy = -20;
}

/*
 * Gestion vectorielle de la vitesse et de la position de la balle.
 */

T_balle balle;


void move_balle(T_obj* j1, T_obj* j2, T_balle* balle) {

	/*On garde l'ancienne position pour l'effacement*/
	unsigned char old_x = balle->x;
	unsigned char old_y = balle->y;
	unsigned char but = 0;

	/* On additionne les vecteurs de vitesse � la position pr�c�dante
	 * position n�gative possible
	 * On traite les collisions avant cast dans uc*/

	balle->precx += (balle->spx);
	balle->precy += (balle->spy);

	/*on v�rifie si la balle ne d�passe pas un bord
	 *On v�rifie si la balle ne d�passe pas une raquette
	 *Si la balle traverse, on g�re le rebond
	 * GROS PAVE INCOMING
	 */
	/*Gestion des collisions coins*/
	/*if (((balle->precx <= 600) && (balle->precy <= 100))
			|| ((balle->precx >= LARGEURP-600) && (balle->precy <= 100))
			|| ((balle->precx <= 600) && (balle->precy >= HAUTEUR-100))
			|| ((balle->precx >= LARGEURP-600) && (balle->precy >= HAUTEUR-100))) {
		balle->spy = ~(balle->spy);
		balle->spx = ~(balle->spx);
	}*/

	/*Gestion des collisions bord sup�rieur*/
	if (balle->precy <= 200) {
		balle->spy = ~(balle->spy);
		balle->precy = 200;
	}

	/*Gestion des collisions bord inf�rieur*/
	else if (balle->precy >= HAUTEURP-100) {
		balle->spy = ~(balle->spy);
		balle->precy = HAUTEURP-100;
	}

	/*Gestion des collisions raquettes*/
	/*RAQUETTE 1*/
	else if (balle->precx <= 600) {
		balle->precx = 700;
		balle->spx = ~(balle->spx);
		switch ((balle->y) - (j1->y)) {
		case 0:
			/*Vite vers le haut*/
			balle->spx *= (13 / 10);
			balle->spy -= 10;
			break;
		case 1:
			/*Un peu vers le haut*/
			balle->spx *= (11 / 10);
			balle->spy -= 5;
			break;
		case 2:
			/*Amorti central*/
			break;
		case 3:
			/*Un peu vers le bas*/
			balle->spx *= (11 / 10);
			balle->spy += 5;
			break;
		case 4:
			/*Vite vers le bas*/
			balle->spx *= (13 / 10);
			balle->spy += 10;
			break;
		case 5:
			/*Vite vers le bas*/
			balle->spx *= (13 / 10);
			balle->spy += 10;
			break;
		default:
			but = 1;
			break;

		}
	}

	/*RAQUETTE 2*/
	else if (balle->precx >= LARGEURP-600) {
		balle->precx = 7300;
		balle->spx = ~(balle->spx);
		switch ((balle->y) - (j2->y)) {
		case 0:
			/*Vite vers le haut*/
			balle->spx *= (13 / 10);
			balle->spy -= 10;
			break;
		case 1:
			/*Un peu vers le haut*/
			balle->spx *= (11 / 10);
			balle->spy -= 5;
			break;
		case 2:
			/*Amorti central*/
			break;
		case 3:
			/*Un peu vers le bas*/
			balle->spx *= (11 / 10);
			balle->spy += 5;
			break;
		case 4:
			/*Vite vers le bas*/
			balle->spx *= (13 / 10);
			balle->spy += 10;
			break;
		case 5:
			/*Vite vers le bas*/
			balle->spx *= (13 / 10);
			balle->spy += 10;
			break;
		default:
			but = 2;
			break;

		}
	} else {
		/*Aucune collision ce tour-ci*/
	}

	switch (but) {
	case 1:
		j1->score++;
		init_balle(balle);
		
		break;
	case 2:
		j2->score++;
		init_balle(balle);
		break;
	default:
		/*Pas de but marqu�*/
		break;
	}

	if (balle->spx > 500)
		balle->spx = 500; /*Limitation vitesse >*/
	else if (balle->spx < -500)
		balle->spx = -500; /*Limitation vitesse <*/
	if (balle->spy > 200)
		balle->spy = 200; /*Limitation vitesse V*/
	else if (balle->spy < -200)
		balle->spy = -200; /*Limitation vitesse ^*/

	/* Quand la balle est dans une trajectoire correcte
	 * on actualise sa position sur la console
	 * apr�s avoir arrondit sa position
	 */
	balle->x = (unsigned char) (balle->precx / 100);
	balle->y = (unsigned char) (balle->precy / 100);

	if ((old_x != balle->x) || (old_y != balle->y)) {
		move(old_x, old_y);
		putc(' ');
		move(balle->x, balle->y);
		putc(balle->skin);
	}

}

