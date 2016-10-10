
#include <stdio.h>

  /* variables globales */

	//int a ;
	//int b ;
	//int s ;

  /* calcul de la somme de a et b */
  
  void somme2entiers (int a, int b , int *ps) {   
  *ps = a + b ;
  }



int main() {

  int a, b, s;
	
  
  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &a) ;


  printf("Entrez au clavier une valeur entiere : ") ;
  scanf("%d", &b) ;

  somme2entiers (a , b, &s) ;

  printf("Leur somme est %d\n", s) ;

  return 0 ;
}
