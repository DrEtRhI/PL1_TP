#include <stdio.h>

int main()
{
	double x, y, i, a;
	double p=1;

	printf("Entrez le premier entier :\n");
	scanf("%lf", &x);
	printf("Entrez le premier entier :\n");
	scanf("%lf", &y);

	if (y == 0){
        p = 1;
	} else if ((x > 0 && y > 0) || (x < 0 && y > 0)){

            for (i = 1; i <= y; i++){
                p = p * x;
            }
        } else if ((x > 0 && y < 0) || (x < 0 && y < 0)){

                    a = y * -1;
                    for (i = 1; i <= a; i++){
                        p = p * (1/x);
                    }
			}

	printf("la valeur de %lf puissance %lf vaut %lf\n", x, y, p);

	return 0;

}
