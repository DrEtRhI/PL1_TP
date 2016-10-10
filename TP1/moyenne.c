#include <stdio.h>

#define N 10

int main() {

  int ec ; /* entier courant */
  int i ; /* compteur */
  int somme ; /* somme de elements de la sequence courante */
  int moyenne ; /* moyenne de elements de la sequence  */


  somme = 0 ;

  /* lecture de la sequence et calcul de la somme */

  for (i=1 ; i<=N ; i++) {
    scanf("%d", &ec) ;
    somme = somme + ec ;
  } ;

  /* calcul de la moyenne */

    moyenne = somme / N ;
   
  /* affichage du resultat */

  printf("la valeur moyenne est : %d\n", moyenne) ;

  return 0 ;
}
