#include "sequence.h"
#include <stdio.h>
#include <stdlib.h>

void LireSeq (SeqInt *s){

	int i, n;
	SeqInt AC, Q;
	i = 0;

		printf("Veuillez entrez le nombre de d'elements total de votre sequence :\n");
		scanf("%d", &n);
		
		AC = (Cellule*) malloc (sizeof(Cellule)); //creation du singleton
		printf("Entrez la valeur de l'element %d sur %d :\n", i + 1, n);
		scanf("%d", &(*AC).E);
		s = &AC;
		Q = AC;
		(*Q).suiv = NULL;
		i++;
	
		while (i < n){
			AC = (Cellule*) malloc (sizeof(Cellule));
			printf("Entrez la valeur de l'element %d sur %d :\n", i + 1, n);
			scanf("%d", &(*AC).E);
			(*Q).suiv = NULL;
			Q = AC;
			i++;
		}
		
}

/*void EcrireSeq (SeqInt s){
	int i;
		
	for (i=0; i<s.nbelem ; i++){
		printf("|%d", s.T[i]);
	}
	printf("|\n");
}

int EstPresent(SeqInt s, int x){
	
	int i = 0;
	int existe = 0;
	
	while ((i < s.nbelem) && (s.T[i] != x)){
		i++;
	}
	
	if (i < s.nbelem){
		existe = 1;
	}
	
	return existe;
	
}

void Inserer(SeqInt *s, int x){
	if ((*s).nbelem != 30){
		(*s).T[(*s).nbelem] = x;
		(*s).nbelem = (*s).nbelem + 1;
	}
}

void Supprimer(SeqInt *s, int x){
	int i = 0;
	
	while ((i < (*s).nbelem) && ((*s).T[i] != x)){
		i++;
	}
	
	if (i < (*s).nbelem){
		(*s).T[i] = (*s).T[(*s).nbelem - 1];
		(*s).nbelem = (*s).nbelem - 1;
	}	
	
} */

int main(){
	SeqInt S;
	S = NULL;
	LireSeq(&S);
	printf("%d\n", (*S).E);
}
