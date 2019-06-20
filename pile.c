#include "pile.h"
#include <stdlib.h>
#include <assert.h>

Pile* initPile(){

	Pile* pile = malloc(sizeof(Pile));
	pile->sommet = NULL;
	return pile;
}

void empiler(Pile* pile, int valeur){

	if(pile->sommet == NULL) {
		pile->sommet = malloc(sizeof(Cellule));
		pile->sommet->valeur = valeur;
		pile->sommet->suivant = NULL;

	} else {

		Cellule* cellule = malloc(sizeof(Cellule));
		cellule->valeur = valeur;
		cellule->suivant = pile->sommet;
		pile->sommet = cellule;
	}

	pile->taille++;
}

int depiler(Pile* pile){

	assert(pile->sommet != NULL);
	int valeur = pile->sommet->valeur;
	Cellule* nouveau_sommet = pile->sommet->suivant;
	free(pile->sommet);
	pile->sommet = nouveau_sommet;
	pile->taille--;

	return valeur;

}

void detruire(Pile* pile){

	while(pile->sommet != NULL) depiler(pile);
	free(pile);
}


