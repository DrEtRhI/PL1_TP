/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: EtRhI_PC
 *
 * Created on 27 septembre 2016, 21:23
 */


/*
 * 
 */
#include <stdio.h>
#define Marque -1

int main(){
	const int N = 50;	
	int i = 0;
	typedef struct {int T[N] ; unsigned int Longueur;} SeqLE;
	SeqLE S;
	int compt = 0;
	
	
	scanf("%d", &S.T[0]); //premiÃ¨re valeur contenue dans le fichier
	
	
	
	while ((S.T[i] != Marque) && (i < N)){	
		scanf("%d", &S.T[i+1]);
		printf("L'entier nÂ°%d, vaut =  %d \n", i+1, S.T[i]);
		i ++;
		compt ++;
 	}
	

	S.Longueur = compt;
	printf("La sÃ©quence en ordre inverse correspond Ã  : ");
	for (i = S.Longueur-1 ; i >= 0 ; i--){
		printf("%d ",S.T[i]);
	}
	printf("\n");
return 0;
}
