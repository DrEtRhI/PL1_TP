#include <stdio.h>

int main()
{
	int x, y, z;



		printf("Entrez le premier entier :\n");
		scanf("%d", &x);
		printf("Entrez le deuxieme entier :\n");
		scanf("%d", &y);
		printf("Entrez le troisieme entier :\n");
		scanf("%d", &z);

		if (x<=y){
			if (z>=y){
				printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", x, y, z);
			} else if (z<x && z<y){
				printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", z, x, y);
				} else {
					printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", x, z, y);
				  }
		} else if (z>=x){
			printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", y, x, z);
		} else if (z<x && z<y){
			printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", z, y, x);
		} else {
			printf("\nAffichage des trois valeurs dans l'ordre croissant : %d, %d, %d\n", y, z, x);
		}

	return 0;

}
