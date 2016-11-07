#include "sequencechaineenoorder.h"
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
		*s = AC;
		Q = AC;
		i++;
	
		while (i < n){
			
			AC = (Cellule*) malloc (sizeof(Cellule));
			printf("Entrez la valeur de l'element %d sur %d :\n", i + 1, n);
			scanf("%d", &(*AC).E);
			(*Q).suiv = AC;
			Q = AC;
			i++;
		}
		(*Q).suiv = NULL;
		
}

void EcrireSeq (SeqInt s){
	SeqInt AC;
	AC = s;
	while (AC != NULL){
	printf("|%d", (*AC).E);
	AC = (*AC).suiv;
	}
	printf("|\n");
	
}

int EstPresent(SeqInt s, int x){
	
	SeqInt AC;
	AC = s;
	
		while (AC != NULL && (*AC).E != x){
			AC = (*AC).suiv;
		}
		
	return AC != NULL;
	
}

void Inserer(SeqInt *s, int x){

	SeqInt AC;
		AC = (Cellule*) malloc (sizeof(Cellule));
		(*AC).E = x;
		(*AC).suiv = *s;
		*s = AC;	
}

void Supprimer(SeqInt *s, int x){
	
	SeqInt AC, AP;
	AC = *s;	
	
	while (AC != NULL && (*AC).E != x){
		AP = AC;
		AC = (*AC).suiv;
	}
	if (AC != NULL){
		(*AP).suiv = (*AC).suiv;
		free(AC);
	}	
	
}
