#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E1, E2, cptE2, cptE1, EC;
    cptE1 = 0;
    cptE2 = 0;

    printf("Premier entier a compter : \n");
    scanf("%d", &E1);
    printf("Deuxieme entier a compter : \n");
    scanf("%d", &E2);
    printf("Entrez une valeur pour la serie: \n");
    scanf("%d", &EC);
    while (EC != 0){
        if (EC == E1){
            cptE1++;
        }
        if (EC == E2){
            cptE2++;
        }
        printf("Entrez une valeur pour la serie: \n");
        scanf("%d", &EC);
    }

    if (cptE1 == cptE2){
        printf("%d est autant present que %d, avec %d et %d apparitions respectivement", E1, E2, cptE1, cptE2);
    }else if (cptE1 > cptE2){
        printf("%d est plus present que %d, avec %d et %d apparitions respectivement", E1, E2, cptE1, cptE2);
    }else{
        printf("%d est plus present que %d, avec %d et %d apparitions respectivement", E2, E1, cptE2, cptE1);
    }
    return 0;
}
