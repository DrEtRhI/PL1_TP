
#include <stdio.h>
#include <stdlib.h>

#define N 20

// definition du type Sequence (avec longueur explicite)
typedef struct {
	int T[N] ;    // les elements de la sequence
	unsigned int L ;  // longueur de la sequence
	} Sequence ; 



/* affichage d'une Sequence */

void affiche (Sequence S) {

  unsigned int i ;

  printf("[") ;
  for (i=0; i<S.L ; i++) {
	printf(" %d ", S.T[i]) ;
  } ;
  printf("]\n") ;
}

/* Generation aleatoire d'une sequence de 10 elements */

void genere (Sequence *S) {

  unsigned int i ;

  (*S).L = 10 ;
  for (i=0; i<(*S).L ; i++) {
	(*S).T[i] = (random() % 50) ;  /* genere un entier aleatoire entre 0 et 49 */
  } ;
}

void insere_specifique (Sequence *S, int x, int insert ){
	
	unsigned int i = 0;
	unsigned int j;	
			
	while (i < (*S).L && (*S).T[i] != insert){
		i++;
	}
	if (i < (*S).L){
		(*S).L = (*S).L + 1;
		for (j = (*S).L; j > i + 1 ; j--){
			(*S).T[j] = (*S).T[j - 1];
		}
	(*S).T[j] = x;	
	} else {
			(*S).T[(*S).L] = (*S).T[0];
			(*S).T[0] = x;
	}
}


/* programme principal */

int main() {

	int x, insert;	
	  
	Sequence S ;

  genere(&S) ;
  affiche(S) ;
	printf("Donner une valeur à ajouter à la séquence : \n");
	scanf("%d", &x);
	printf("Après quelle valeur de la suite voulez-vous insérer votre élément :\n");
	scanf("%d", &insert);
	insere_specifique(&S, x, insert);
	affiche(S);


  return 0 ;
}
