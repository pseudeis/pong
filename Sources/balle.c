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


void init_balle(T_balle* balle){
	balle->x=40;
	balle->y=12;
	balle->spx=0;
	balle->spy=0;
	balle->skin='O';
	move(balle->x, balle->y);
	putc('O');

}


/*
 * Gestion vectorielle de la vitesse et de la position de la balle.
 */

void move_balle(T_obj* j1, T_obj* j2, T_balle* balle) {
	
	unsigned char old_x=balle->x;
	unsigned char old_y=balle->y;
	
	/* On additionne une fraction de la vitesse 
	 * arrondie au plus proche et cast� dans un char
	 * � la position pr�c�dante*/

	balle->x += (signed char)(((balle->spx) / 10));
	balle->y += (signed char)(((balle->spy) / 10));

	/*on v�rifie si la balle ne d�passe pas un bord
	 *On v�rifie si la balle ne d�passe pas une raquette
	 */

	/*Si la balle traverse, on g�re le rebond
	 * GROS PAVE INCOMING
	 */

	/* Quand la balle est dans une trajectoire correcte
	 * on actualise sa position sur la console
	 */
	
	move(old_x, old_y);
	putc(' ');
	move(balle->x, balle->y);
	putc('O');
	
}

