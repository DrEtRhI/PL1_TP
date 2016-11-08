
/* Type Sequence (representation contigue dans un tableau) 
	 Création de fonctions et action opérant sur des séquences
	 contigues dans un tableau :
	 Création séquence
	 Affichage séquence
	 Recherche d'un élément dans la séquence
	 Insérer un élément dans la séquence
	 Supprimer un élément de la séquence
	 */

#define LGMAX 30

/* definition du type SeqInt */

typedef struct {
	int T[LGMAX] ;  /* tableau contenant les elements de la sequence */
	int nbelem ;    /* nombre d'elements presents dans la sequence */
} SeqInt ;

/* en-tetes des fonctions sur SeqInt */

/* Création d'une séquence entrée séquentiellement par l'utilisateur
	 Vérification préalable que la taille de la séquence demandé par 
	 l'utilisateur est bien <= LGMAX.
	 Tant que la longueur la taille de séquence demandée par l'utilisateur
	 est supérieure à LGMAX, une nouvelle taille lui est demandée.*/
void LireSeq (SeqInt *s) ;


/* Affichage à l'écran d'une séquence éxistante */
void EcrireSeq (SeqInt s) ;

/* Recherche dans une séquence le premier entier x. Si x est présent dans
	 la séquence la fonction renvoie vrai(1) sinon la fonction renvoie 
	 faux(0).*/
int EstPresent (SeqInt s, int x) ;

/* Insère en queue de séquence le nouvel entier x*/ 
void Inserer (SeqInt *s, int x) ;

/* Supprime l'entier x de la séquence s'il est présent. La valeur du dernier
   entier de la séquence est copié à l'indice de x. Et la taille de la
   séquence est réduite de 1. Si x n'est pas présent dans la séquence, cette
   dernière est inchangée.*/ 
void Supprimer (SeqInt *s, int x) ;
