#include <stdio.h>

int main(){
	const int N = 50;	
	int i;
	typedef struct {int T[N] ; unsigned int Longueur;} SeqLE;
	SeqLE S;
	
	//choix du de la longueur de la séquence
	printf("Quelle longueur de tableau voulez-vous ?:\n");
	scanf("%d", &S.Longueur);

	for (i = 0 ; i < S.Longueur ; i++){
		printf("Entrez l'entier n°%d, d'un total de %d entiers\n", i+1, S.Longueur);
		scanf("%d", &S.T[i]);
	}
	
	for (i = S.Longueur-1 ; i >= 0 ; i = i - 1){
		printf("%d ",S.T[i]);
	}
return 0;
}
