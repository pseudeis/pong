/*
 * raquette.c
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#include "intro.h"
#include "raquette.h"
#include "bsp.h"


void put_raquette(T_raquette* j1, T_raquette* j2) {
	unsigned char i=0;
	
	/*Position de la raquette du J1*/
	j1->x = 5;
	j1->y = 8;
	j1->len = 5;

	/*Position de la raquette du J2*/
	j2->x = 75;
	j2->y = 8;
	j2->len = 5;

	/*
	 * Affichage des raquettes.
	 */
	for (i = 0; i < j1->len; i++) {
		move(j1->x, j1->y + i);
		putc('|');
	}
	i = 0;
	for (i = 0; i < j2->len; i++) {
		move(j2->x, j2->y + i);
		putc('|');
	}

}

void move_raquette(T_raquette* j1, T_raquette* j2) {

	/*JOUEUR 1*/
	if ((!PTAD_PTAD3) && (j1->y < 17)) {
		move(j1->x, j1->y); /*On se place en haut de la raquette*/
		putc(' '); /*On efface l'extremité*/
		j1->y++; /*Déplacement position verticale*/
		move(j1->x, j1->y + 5); /*On se déplace en bas de la nouvelle raquette*/
		putc('|'); /*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}
	if (!(PTAD_PTAD2) && (j1->y > 3)) {
		move(j1->x, j1->y + 5); /*On se place en bas de la raquette*/
		putc(' '); /*On efface l'extremité*/
		j1->y--; /*Déplacement position verticale*/
		move(j1->x, j1->y); /*On se déplace en haut de la nouvelle raquette*/
		putc('|'); /*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}

	/*JOUEUR 2*/
	if ((!PTDD_PTDD3) && (j2->y < 17)) {
		move(j2->x, j2->y); /*On se place en haut de la raquette*/
		putc(' '); /*On efface l'extremité*/
		j2->y++; /*Déplacement position verticale*/
		move(j2->x, j2->y + 5); /*On se déplace en bas de la nouvelle raquette*/
		putc('|'); /*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}
	if (!(PTDD_PTDD2) && (j2->y > 3)) {
		move(j2->x, j2->y + 5); /*On se place en bas de la raquette*/
		putc(' '); /*On efface l'extremité*/
		j2->y--; /*Déplacement position verticale*/
		move(j2->x, j2->y); /*On se déplace en haut de la nouvelle raquette*/
		putc('|'); /*On écrit la nouvelle extremité de la raquette*/
	} else {
		/*Don't move*/
	}

}

