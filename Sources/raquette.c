/*
 * raquette.c
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#include "intro.h"
#include "raquette.h"

void move_raquette(void) {

	T_raquette joueur_1;
	T_raquette joueur_2;

	
	/*Position de la raquette du J1*/
	joueur_1.x = 5;
	joueur_1.y = 8;
	joueur_1.len = 5;

	/*Position de la raquette du J2*/
	joueur_2.x = 75;
	joueur_2.y = 8;
	joueur_2.len = 5;

	/*Position des écritures centrale*/
	compt.x = 40;
	compt.y = 12;
	compt.len = 0;

	/*
	 * Affichage des raquettes.
	 */
	for (i = 0; i < joueur_1.len; i++) {
		move(joueur_1.x, joueur_1.y + i);
		putc('|');
	}
	i = 0;
	for (i = 0; i < joueur_2.len; i++) {
		move(joueur_2.x, joueur_2.y + i);
		putc('|');
	}


	
	/*JOUEUR 1*/
	if ((!PTAD_PTAD3) && (joueur_1.y < 17)) {
		move(joueur_1->x, joueur_1->y);			/*On se place en haut de la raquette*/
		putc(' ');								/*On efface l'extremité*/
		joueur_1.y++; 							/*Déplacement position verticale*/
		move(joueur_1->x, joueur_1->y + 5);		/*On se déplace en bas de la nouvelle raquette*/
		putc('|');								/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}
	if (!(PTAD_PTAD2) && (joueur_1.y > 3)) {
		move(joueur_1->x, joueur_1->y + 5);		/*On se place en bas de la raquette*/
		putc(' ');								/*On efface l'extremité*/
		joueur_1.y--; 							/*Déplacement position verticale*/
		move(joueur_1->x, joueur_1->y);			/*On se déplace en haut de la nouvelle raquette*/
		putc('|');								/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}

	/*JOUEUR 2*/
	if ((!PTDD_PTDD3) && (joueur_2.y < 17)) {
		move(joueur_2->x, joueur_2->y);			/*On se place en haut de la raquette*/
		putc(' ');								/*On efface l'extremité*/
		joueur_2.y++; 							/*Déplacement position verticale*/
		move(joueur_2->x, joueur-_2>y + 5);		/*On se déplace en bas de la nouvelle raquette*/
		putc('|');								/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}
	if (!(PTDD_PTDD2) && (joueur_2.y > 3)) {
		move(joueur_2->x, joueur_2->y + 5);		/*On se place en bas de la raquette*/
		putc(' ');								/*On efface l'extremité*/
		joueur_2.y--; 							/*Déplacement position verticale*/
		move(joueur_2->x, joueur_2->y);			/*On se déplace en haut de la nouvelle raquette*/
		putc('|');								/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}

}

