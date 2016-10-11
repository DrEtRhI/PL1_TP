#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, m;
    printf("Valeur de a : \n");
    scanf("%d", &a);
    printf("Valeur de b : \n");
    scanf("%d", &b);
    printf("Valeur de c : \n");
    scanf("%d", &c);

    if (a > b){
        m = a;
    }else{
        m = b;
    }
    if (m > c){
        printf("la valeur maximum est : %d\n", m);
    }else{
        printf("la valeur maximu est : %d\n", c);
    }

    return 0;
}
