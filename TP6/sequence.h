
/* Type Sequence (representation contigue dans un tableau) */

#define LGMAX 30

/* definition du type SeqInt */

typedef struct {
	int T[LGMAX] ;  /* tableau contenant les elements de la sequence */
	int nbelem ;    /* nombre d'elements presents dans la sequence */
} SeqInt ;

/* en-tetes des fonctions sur SeqInt */

void LireSeq (SeqInt *s) ;
void EcrireSeq (SeqInt s) ;
int EstPresent (SeqInt s, int x) ;
void Inserer (SeqInt *s, int x) ;
void Supprimer (SeqInt *s, int x) ;
