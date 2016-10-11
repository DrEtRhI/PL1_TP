#include <stdio.h>
#include "type_fraction.h"
#include "es_fraction.h"
#include "op_fraction.h"


int main(){

	//déclaration des variables
	Fraction f1;
	Fraction f2;
	int estEgal;

	//Saisie des fractions par l'utilisateur
	LireFraction(&f1);
	LireFraction(&f2);

	//Retourne la valeur de la somme des fractions
	printf("Le résultat de f1 + f2 est :\n");
	EcrireFraction(AddFraction(f1,f2));

	//Retourne la valeur de la multiplication des fractions
	printf("Le résultat de f1 * f2 est :\n");
	EcrireFraction(MultFraction(f1,f2));

	//Message indiquant si les fractions sont égales ou non 
	estEgal = EgalFraction(f1,f2);
	if (estEgal != 0){
		printf("Les deux fractions sont égales.\n");
	} else {
		printf("Les deux fractions ne sont pas égales.\n");
	}

return 0;
}
