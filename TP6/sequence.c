#include "sequence.h"
#include <stdio.h>
#include <stdlib.h>

void LireSeq (SeqInt *s){

	int i, n;
	SeqInt N, AC, AP;
	//SeqInt Q;
	i = 0;
	

		printf("Veuillez entrez le nombre de d'elements total de votre sequence :\n");
		scanf("%d", &n);
		
		N = (Cellule*) malloc (sizeof(Cellule)); //creation du singleton
		printf("Entrez la valeur de l'element %d sur %d :\n", i + 1, n);
		scanf("%d", &(*N).E);
		(*N).suiv = NULL;
		*s = N;
		//Q = N;
		//(*Q).suiv = NULL;
		i++;
		AC = *s;
		AP = *s;

		while (i < n){
			
			N = (Cellule*) malloc (sizeof(Cellule));
			printf("Entrez la valeur de l'element %d sur %d :\n", i + 1, n);
			scanf("%d", &(*N).E);
			(*N).suiv = NULL;
				while (AC != NULL && (*AC).E <= (*N).E) {
					AP = AC;					
					AC = (*AC).suiv;
				}			
				if (AC !=	NULL && (*AP).suiv == AC){
					(*N).suiv = AC;
					(*AP).suiv = N;
				}else if (AC != NULL){
					(*N).suiv = AC;
					*s = N;
				}else{
					(*AP).suiv = N;
					AP = N;
					(*AP).suiv = NULL;		
					/*(*Q).suiv = N;
					Q = N;
					(*Q).suiv = NULL;*/
				}
			i++;
			AC = *s;
			AP = *s;
		}
		
		
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

	SeqInt AP, AC, N;
	AC = *s;
	N = (Cellule*) malloc (sizeof(Cellule));
	(*N).E = x;
	while (AC != NULL && (*AC).E <= (*N).E) {
				AP = AC;					
				AC = (*AC).suiv;
	}			
		(*N).suiv = AC;
		(*AP).suiv = N;	
}
void Supprimer(SeqInt *s, int x){
	
	SeqInt AC, AP;
	AC = *s;	
	AP = *s;
	while (AC != NULL && (*AC).E != x){
		AP = AC;
		AC = (*AC).suiv;
	}
	if (AC != NULL && (*AP).suiv == AC){
		(*AP).suiv = (*AC).suiv;
		free(AC);
	}else if (AC != NULL){
		*s = (*AC).suiv;
		free(AC);
	}
		
	
}

