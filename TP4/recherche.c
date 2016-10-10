
#include <stdio.h>
#include <stdlib.h>

#define N 10

void affiche (int T[], unsigned int l) {
/* affiche les l premiers elements du tableau T */

  unsigned int i ;
  printf("[") ;
  for (i=0; i<l ; i++) {
	printf(" %d ", T[i]) ;
  } ;
  printf("]\n") ;
}

void genere (int T[], unsigned int l) {
/* initialise les l premiers elements du tableau T */

  unsigned int i ;
  for (i=0; i<l ; i++) {
	T[i] = (random() % 50) ;  /* genere un entier aleatoire entre 0 et 49 */
  } ;
}

int recherche (int T[], int L, int x){
	
	unsigned int i = 0;	
	while ((i < L) && (T[i] != x)){
		i = i + 1;
	}
	return i < L;
}


int main() {

  int Tab[N] ;
	int x;
	int s;

	printf("Entier à rechercher dans la suite alétoire de 10 éléments :\n");
	scanf("%d", &x);
  srandom (42)  ; /* germe pour la suite pseudo-aleatoire */
  genere(Tab, N) ;
  affiche(Tab, N) ;
	s = recherche(Tab, 10, x);
	if (s == 1){
		printf("la valeur %d est bien présente dans la suite aléatoire!\n", x);
	} else {
			printf("la valeur %d n'est pas présente dans la suite aléatoire!\n", x);
	}


  return 0 ;

}
