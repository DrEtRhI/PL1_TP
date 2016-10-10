#include <stdio.h>

 /* definition d'un type pour representer une date */

typedef unsigned int Jour ;

typedef enum {jan, fev, mar, avr, mai, jun, jui, aou, sep, oct, nov, dec} Mois ;
  /* attention : jan vaut 0, fev vaut 1, mar vaut 2, etc. */

typedef unsigned int Annee ;


 typedef struct {
	Jour jour ;
	Mois mois ;
	Annee annee ; } Date ;

/* affichage d'une date a l'ecran */

void afficheDate (Date d) {
   printf("%u/%u/%u", d.jour, d.mois + 1, d.annee) ;
}


int main() {

	unsigned int j, m, a;
	Date DateEntree;
	char booleen = 0;
	printf("entrez une date sour la forme 01 02 1985 : \n");
	scanf("%u %u %u", &j, &m, &a);
	DateEntree.jour = j;
	DateEntree.mois = m - 1;
	DateEntree.annee = a;

	// Cas des mois avec 31 jours
	if (((DateEntree.mois == jan) || (DateEntree.mois == mar) || (DateEntree.mois == mai) || (DateEntree.mois == jui) || (DateEntree.mois == aou) || (DateEntree.mois == oct) || (DateEntree.mois == dec)) && (DateEntree.jour >= 1) && (DateEntree.jour <= 31)) {
		booleen = 1;
	}
	// Cas des mois avec 30 jours
	if (((DateEntree.mois == avr) || (DateEntree.mois == jun) || (DateEntree.mois == sep) || (DateEntree.mois == nov)) && (DateEntree.jour >= 1) && (DateEntree.jour <= 30)){
		booleen = 1;
	}
	// Cas du mois de février avec prise en compte des années bissextiles
	if (DateEntree.mois == fev) {
		if ((DateEntree.jour >= 1) && (DateEntree.jour <= 28)) {
			booleen = 1;
		} else if ((((DateEntree.annee % 4 == 0) && (DateEntree.annee % 100 != 0)) || (DateEntree.annee % 400 == 0)) && (DateEntree.jour >= 1) && (DateEntree.jour <= 29)) {
			  	booleen = 1;
			  }
	}

	afficheDate(DateEntree);

	if (booleen == 1){
		printf(" : cette date est correcte\n");
	}else{
			printf(" : cette date est incorrecte\n");
		 }



 return 0 ;
}
