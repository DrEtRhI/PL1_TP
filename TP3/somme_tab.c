#include <stdio.h>
#define N 10

int main(){
	
	int T[N];
	int Somme, i;
	
	for (i=0 ; i < N ; i++){
		printf("Saisissez un entier:\n");
		scanf("%d", &T[i]);
	}
	
	Somme = 0;
	
	for (i=0 ; i < N ; i++){
		Somme = Somme + T[i];
	}

	printf("La somme des 10 entiers vaut : %d\n", Somme);
	
	return 0;
}
