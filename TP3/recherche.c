#include <stdio.h>
#define N 10

int main(){
	int T[N];
	int x, i;
	unsigned int j;

	for (i = 0 ; i < N ; i++){
		printf("Saisissez un entier :\n");
		scanf("%d", &T[i]);
	}
	
	printf("Entier à rechercher?\n");
	scanf("%d", &x);
	
	j = 0;
	while ((j < N) && (T[j] !=x)){
		j++; // on incrémente j de 1 à chaqhe fois donc utilisation de ++
	}

	if (j < N){
		printf("La valeur %d a été trouvé en position: %d \n", x, j+1);
	} else {
		printf("Non trouvé\n");
	  }

return 0;

}

