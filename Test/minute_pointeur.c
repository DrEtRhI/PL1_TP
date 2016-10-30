#include <stdio.h>

void minuteHeure(int *ph, int *pm){
	*ph = *pm / 60;
	*pm = *pm % 60;
}

int main(){

	int h = 0;
	int m = 0;

	printf("Quelle valeur en minute souhaitez vous convertir en h min ? :\n");
	scanf("%d", &m);
	printf("La conversion de %d, vaut :", m);
	minuteHeure(&h, &m);
	printf(" %dh et %d min\n", h, m);

return 0;
}
