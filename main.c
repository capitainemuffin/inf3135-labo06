#include "pile.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	Pile* pile = init();

	for(int i = 1; i < 34; i+=3){

		empiler(pile, i);
	}

	while(pile->taille > 0){

		printf("Taille après dépilation : %d, Valeur dépilée : %d\n", pile->taille, depiler(pile));

	}

	for(int i = 0; i < 100; i+=2){
		empiler(pile,i);
	}

	printf("Taille avant destructtion : %d\n", pile->taille);
	detruire(pile);
	printf("Taille après destructtion : %d\n", pile->taille);

	free(pile);

	return 0;
}