#include "sequencecontnoorder.h"
#include <stdio.h>

void LireSeq (SeqInt *s){

	int i, j;
	j = 1;

	while (j == 1){

		printf("Veuillez entrez le nombre de d'elements total de votre sequence :\n");
		scanf("%d", &(*s).nbelem);
	
		if((*s).nbelem <= 30){
			j = 0;
		}else{
			printf("La sequence ne peut pas exeder 30 elements !\n");
		}
	}
		
	for (i=0; i<(*s).nbelem; i++){
		printf("Entrez l'entier numéro %d sur %d :\n", i+1, (*s).nbelem);
		scanf("%d", &(*s).T[i]);
	}
}

void EcrireSeq (SeqInt s){
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
	
}
