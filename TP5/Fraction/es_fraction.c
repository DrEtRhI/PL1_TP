#include <stdio.h>
#include "type_fraction.h"

void EcrireFraction(Fraction f){
	printf("%d/%d\n", f.num, f.den);
}

void LireFraction(Fraction *f){
	printf("Donner un entier pour le numerateur :\n");	
	scanf("%d", &((*f).num));
	printf("Donner un entier pour le denominateur :\n");
	scanf("%d", &((*f).den));
}
