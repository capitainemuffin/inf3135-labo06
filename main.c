#include "pile.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	Pile* pile = initPile();

	printf("On empile ...\n");

	for(int i = 1; i < 34; i+=3){

		empiler(pile, i);
	}

	printf("Taille avant de dépiler : %d\n", pile->taille);

	while(pile->taille > 0){

		printf("Valeur dépilée : %d\n", depiler(pile));

	}

	printf("Taille après avoir dépilé : %d\n", pile->taille);
	printf("On empile ...\n");

	for(int i = 0; i < 100; i+=2){
		empiler(pile,i);
	}

	printf("Taille avant destructtion : %d\n", pile->taille);
	detruire(pile);
	printf("Taille après destructtion : %d\n", pile->taille);

	return 0;
}