#include <stdio.h>
#define Marque -1

int main(){
	const int N = 50;	
	int i = 0;
	typedef struct {int T[N] ; unsigned int Longueur;} SeqLE;
	SeqLE S;
	int compt = 0;
	
	
	scanf("%d", &S.T[0]); //première valeur contenue dans le fichier
	
	
	
	while ((S.T[i] != Marque) && (i < N)){	
		scanf("%d", &S.T[i+1]);
		printf("L'entier n°%d, vaut =  %d \n", i+1, S.T[i]);
		i ++;
		compt ++;
 	}
	

	S.Longueur = compt;
	printf("La séquence en ordre inverse correspond à : ");
	for (i = S.Longueur-1 ; i >= 0 ; i = i - 1){
		printf("%d ",S.T[i]);
	}
	printf("\n");
return 0;
}
