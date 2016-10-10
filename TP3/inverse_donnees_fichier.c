#include <stdio.h>

int main(){
	const int N = 50;	
	int x, i;
	//typedef struct {int T[N] ; unsigned int L;} SeqLE;
	//SeqLE S;
	int T[N];
	
	
	scanf("%d", &x);
	printf("Travail sur une séquence de %d valeurs ?:\n", x);

	for (i = 0 ; i < x ; i++){
		scanf("%d", &T[i]);
		printf("L'entier n°%d, vaut: %d \n", i+1, T[i]);
	}
	
	printf("La séquence en ordre inverse est :");
	for (i = x-1 ; i >= 0 ; i = i - 1){
		printf("%d ",T[i]);
	}
return 0;
}
