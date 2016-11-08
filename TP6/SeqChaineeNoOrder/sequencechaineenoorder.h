/* definition du type SeqInt pour une représenation en liste chainee*/

typedef struct cellule{
	int E ;  /* champ valeur de la cellule */
	struct cellule *suiv ;    /* champ adresse de la cellule suivante */
} Cellule ;  /*Nom de l'objet élémentaire constituant la liste chainée*/

typedef Cellule *SeqInt; /* definition du type pointeur de Cellule : SeqInt */

/* en-tetes des fonctions sur SeqInt */


/* Création d'une liste chainée entrée au clavier. La taille de la séquence
   est demandée, puis les valeurs formant cette séquence. Les nouveaux
   élément créés sont chainée en tete.*/
void LireSeq (SeqInt *s) ;

/* Affiche à l'écran les valeurs contenues dans la liste chainée.*/
void EcrireSeq (SeqInt s) ;

/* Cherche le premier entier x de la séquence. La fonction renvoie vrai(1)
   si x est présent dans la séquence chainée, sinon elle renvoie faux(0).*/
int EstPresent (SeqInt s, int x) ;

/* Insère le nouvellement élément ayant pour valeur x en tete de la séquence
   chainée.*/
void Inserer (SeqInt *s, int x) ;

/* Supprime l'élément ayant pour valeur x. Si x n'est pas présent dans la 
   séquence chainée alors elle est inchangée. S'il est présent l'élément est
   déconnecté de la séquence et la case mémoire est libérée.*/
void Supprimer (SeqInt *s, int x) ;
