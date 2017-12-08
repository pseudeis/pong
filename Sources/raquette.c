/*
 * raquette.c
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#include "bsp.h"
#include "intro.h"
#include "raquette.h"
#include "balle.h"

void init_raquette(T_obj* raquette) {
	unsigned char i = 0;

	/*Position de la raquette du J1*/
	raquette->y = 8;
	raquette->len = 5;
	raquette->score = 0;

	/*
	 * Affichage des raquettes.
	 */
	for (i = 0; i < raquette->len; i++) {
		move(raquette->x, raquette->y + i);
		putc('|');
	}

}

void move_raquette1(T_obj* j1) {

	/*JOUEUR 1*/
	if ((!PTAD_PTAD3) && (j1->y < 18)) {
		move(j1->x, j1->y); /*On se place en haut de la raquette*/
		putc(' ');
		/*On efface l'extremité*/
		j1->y++; /*Déplacement position verticale*/
		move(j1->x, j1->y + j1->len); /*On se déplace en bas de la nouvelle raquette*/
		putc('|');
		/*On écrit la nouvelle extremité de la raquette*/
	} else if (!(PTAD_PTAD2) && (j1->y > 2)) {
		move(j1->x, j1->y + j1->len); /*On se place en bas de la raquette*/
		putc(' ');
		/*On efface l'extremité*/
		j1->y--; /*Déplacement position verticale*/
		move(j1->x, j1->y); /*On se déplace en haut de la nouvelle raquette*/
		putc('|');
		/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}
}

void move_raquette2(T_obj* j2) {

	/*JOUEUR 2*/
	if ((!PTDD_PTDD3) && (j2->y < 18)) {
		move(j2->x, j2->y); /*On se place en haut de la raquette*/
		putc(' ');
		/*On efface l'extremité*/
		j2->y++; /*Déplacement position verticale*/
		move(j2->x, j2->y + j2->len); /*On se déplace en bas de la nouvelle raquette*/
		putc('|');
		/*On écrit la nouvelle extremité de la raquette*/
	} else if (!(PTDD_PTDD2) && (j2->y > 2)) {
		move(j2->x, j2->y + j2->len); /*On se place en bas de la raquette*/
		putc(' ');
		/*On efface l'extremité*/
		j2->y--; /*Déplacement position verticale*/
		move(j2->x, j2->y); /*On se déplace en haut de la nouvelle raquette*/
		putc('|');
		/*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}

}

