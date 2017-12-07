/*
 * intro.c
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#include "intro.h"

T_raquette compt;
static unsigned char i;
static unsigned char unit;
static unsigned char dizaine;

void decor(void) {
	unsigned char i = 0;
	for (i = 0; i < 80; i++) {
		move(i, 1);
		putc('#');
		/*Affichage de la ligne du haut*/
		move(i, 24);
		putc('#');
		/*Affichage de la ligne du bas*/
	}

	for (i = 0; i < 24; i++) {
		move(1, i);
		putc('#');
		/*Affichage de la ligne de gauche*/
		move(79, i);
		putc('#');
		/*Affichage de la ligne de droite*/
	}

}

/*
 * Compte de 0 à 99.
 * S'arrête par appui sur PTA2
 * Souci : si on appui sur PTA2 pendant le délai, aucun effet.
 * Solution : appuyer longtemps (1 sec environ)
 */
void decompte() {
	unit = 0;
	dizaine = 0;
	move(compt->x - 1, compt->y);
	putc(dizaine++ + '0');
	while (1) {
		if (unit == 10) {
			unit = 0;
			move(compt->x - 1, compt->y);
			putc(dizaine++ + '0');
		}
		move(compt->x, compt->y);
		putc(unit++ + '0');
		delay(10000);
		if ((!PTAD_PTAD2)) {
			break;
		}
	}

}
