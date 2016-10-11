#include <stdio.h>

#include "type_complexe.h"

void LireComplexe (Complexe *c) {
   printf("partie reelle ? ") ;
   scanf ("%f", &(c->reel)) ;
   printf("partie imaginaire ? ") ;
   scanf ("%f", &(c->imaginaire)) ;
}

void EcrireComplexe (Complexe c) {
   printf("partie reelle = %f, partie imaginaire = %f\n", c.reel, c.imaginaire) ;
}
 

