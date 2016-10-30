/* definition du type SeqInt pour une représenation en liste chainee*/

typedef struct cellule{
	int E ;  /* champ valeur de la cellule */
	struct cellule *suiv ;    /* champ adresse de la cellule suivante */
} Cellule ;

typedef Cellule *SeqInt; /* definition du type pointeur de SeqInt */

/* en-tetes des fonctions sur SeqInt */

void LireSeq (SeqInt *s) ;
void EcrireSeq (SeqInt s) ;
int EstPresent (SeqInt s, int x) ;
void Inserer (SeqInt *s, int x) ;
void Supprimer (SeqInt *s, int x) ;
