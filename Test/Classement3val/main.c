#include <stdio.h>
#include <stdlib.h>

int main(){

    void ordre3val(int a, int b, int c){
    if (a > c){
        if (c > b){
            printf("le classement est : %d %d %d\n", b, c, a);
        }else if (b > a){
            printf("le classement est : %d %d %d\n", c, a, b);
        }else{
            printf("le classement est : %d %d %d\n", c, b, a);
        }
    }else if (a > b){
        printf("le classement est : %d %d %d\n", b, a, c);
    }else if (b > c){
        printf("le classement est : %d %d %d\n", a, c, b);
    }else{
        printf("le classement est : %d %d %d\n", a, b, c);
    }
    }

    void ordre_2(int x, int y){
        if (x > y){
            printf("le classement est : %d %d\n", y, x);
        }else{
            printf("le classement est : %d %d\n", x, y);
        }
    }

    int a, b, c;

    printf("Entrez trois entiers :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    if (a == b){
        if (a == c){
            printf("le classement est : %d\n", a);
        }else{
            ordre_2(a, c);
        }
    }else if (a == c){
        ordre_2(b, c);
    }else if (b == c){
        ordre_2(a, c);
    }else{
        ordre3val(a, b, c);
    }
    return 0;
}

