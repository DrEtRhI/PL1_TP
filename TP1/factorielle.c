#include <stdio.h>

int main()
{
	int x, i;
	int p = 1;
	
	printf("Entrez un entier positif :\n");
	scanf("%d", &x);
	
	for (i = 1; i <= x; i++){
		p = i * p;
	}			 
	
	printf("la valeur factorielle de %d vaut %d\n", x, p);	
	
	return 0;
	
}
