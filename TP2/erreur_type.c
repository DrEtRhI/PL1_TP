#include <stdio.h>

 /* definition d'un type pour representer un nombre complexe */

 typedef struct {
	int partie_reelle ;
	int partie_imaginaire ; } Complexe ;

 typedef struct {
	int partie_reelle ;
	int partie_imaginaire ; } Complexe_bis ;


float u ;
int x ;
unsigned int i ;

int main() {

	Complexe c1={4, 6}, c2={3,8} ;
	Complexe c3 ;
	Complexe_bis c4 ;


	/* calcul de la somme de c1 et c2, a corriger ! */

	c3 = c1 + c2 ;	
	printf("la somme de c1 et c2 vaut {%d, %d}\n", c3.partie_reelle, c3.partie_imaginaire) ;
	
	/* affectation de c4 par c3, a corriger ! */
	
	c4 = c3 ;
	printf("c4 vaut {%d, %d}\n", c4.partie_reelle, c4.partie_imaginaire) ;

	/* affectation de la partie reelle de c3 a x, pas de conversion possible, a corriger !  */

	x = c3 ;
	x = (int) c3 ;

	/* conversions implicites entre entiers et reels */

	u = 25.3 ;
	printf("valeur de u : %f\n", u) ;

	x = u ;
	printf("valeur de x : %d\n", x) ;

	/* conversions implicites entre entier signes et non signes */

	x = -14 ;
	printf("valeur de x : %d\n", x) ;

	i = x ;
	printf("valeur de i : %u\n", i) ;

 return 0 ;
}
