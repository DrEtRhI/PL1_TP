#include <stdio.h>
#define TAILLE 100

typedef struct {int Tab[TAILLE]; int L;} Sequence;
void creationTabEntier(Sequence S, int x);

int main()
{
	
	int L;
	Sequence S;	
	printf("taille sequence :\n");
	scanf("%d", &L);
	creationTabEntier(S, L);
	printf("valeur : %d\n", S.Tab[0]);
	printf("valeur : %d\n", S.Tab[3]);
	printf("valeur : %d\n", S.Tab[5]);

return 0;
}

void creationTabEntier(Sequence S, int x){
	S.L = x;	
	if (x > 100){
		printf("Erreur Sequence plus grande que le tableau la contenant\n");
	}else{
		int i = 0;
		for (i = 0; i < S.L; i++){
			S.Tab[i] = i + 1;
		}
	}
}
