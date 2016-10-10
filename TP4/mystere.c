
#include <stdio.h>

  /* variables globales */

int a ;
int b ;


void f1 () {
   int *p ;    // p est un pointeur sur un entier

   p = &a ;      // p pointe sur la variable a ;
   *p = *p + 1 ; // on incremente la valeur pointee par p ;
}

int f2(int x) {
    return x + b ; 
}

void f3(int *x) {
    *x = *x + 1 ;
}


int main() {

 int c ;    // variable locale a la fonction main

  a = 1 ;
  b = 2 ;
  c = 3 ;

  f1() ;   //  appel de f1

	printf("Après f1() :\na = %d\nb = %d\nc = %d\n", a, b, c);

  // (1) valeurs courantes de a, b et c ? 

  c = f2(b) ; // appel de f2  
	
	printf("Après f2() :\na = %d\nb = %d\nc = %d\n", a, b, c);

  // (2) valeurs courantes de a, b et c ?

  f3(&a) ; // appel de f3 

	printf("Après f3() :\na = %d\nb = %d\nc = %d\n", a, b, c); 

  // (3) valeurs courantes de a, b et c ?

  return 0 ;
}

