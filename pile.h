#ifndef PILE_H_
#define PILE_H_

typedef struct Cellule_S {

	int valeur;
	struct Cellule_S* suivant;

} Cellule;

typedef struct {
	Cellule* sommet;
	int taille;
} Pile;

Pile* init(void);

void empiler(Pile*, int);
int depiler(Pile* pile);

void detruire(Pile*);

#endif 		