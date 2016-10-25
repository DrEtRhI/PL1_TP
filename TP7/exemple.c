#include <stdio.h>


#define N 10

/* affiche le contenu du tableau T */

void Afficher(int *T, int l) {
   int i ;
   
   for (i=0; i<l ; i++) { 
    printf (" %d ", T[i]) ;
   } ;
   printf("\n") ;
}


/* recherche de l'indice de l'element minimum dans T */

int IndMinimum(int *T, int l) {
   int i ;
   int min ;
   int ind_min ;
   
   min=T[0] ; 
   ind_min = 0 ;
   i = 1 ;

   while (i<l) {
	if (T[i] < min) {
		min = T[i] ; ind_min = i ;
	} ;
	i = i+1 ;
   } ;
   return ind_min ;
}

/* Echange les valeurs de a et b */

void Echanger (int *a, int *b) {
	int tmp ;
	
	tmp =  *a ;
	*a = *b ;
	*b = tmp ;
}


int main(){

	int S[N] = {12, 24, 4, 15, 17, 8, 25, 7, 9, 12} ;
	int ind_min ;

	Afficher(S, N) ;
	ind_min = IndMinimum(S, N) ;
	Echanger(&S[0], &S[ind_min]) ;
	Afficher(S, N) ;

	return 0 ;
}
