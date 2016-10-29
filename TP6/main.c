
#include<stdio.h>
#include "sequence.h"

/* Programme de test pour les fonctions du type SeqInt */

int main() {
	SeqInt s ;


	LireSeq(&s) ;
	EcrireSeq(s) ; 

	Inserer(&s, 13) ;
	Inserer(&s, 14) ;
	Inserer(&s, 12) ;
	EcrireSeq(s) ;

	if(EstPresent(s, 13)) 
		printf("13 est present\n") ;
	else 
		printf("13 est absent !\n") ;

	Supprimer(&s, 13) ;
	EcrireSeq(s) ;

	if(EstPresent(s, 13)) 
		printf("13 est present\n") ;
	else 
		printf("13 est absent !\n") ;

	Supprimer(&s, 13) ;
	EcrireSeq(s) ;

	if(EstPresent(s, 13)) 
		printf("13 est present\n") ;
	else 
		printf("13 est absent !\n") ;


	return 0 ;

}
