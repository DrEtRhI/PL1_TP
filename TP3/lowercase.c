#include <string.h>
#include <stdio.h>


int main(){
	
	char s[50];
	unsigned int nbrcara;
	int i;
	

	printf("Entrez une phrase comportant des majuscules :\n");
	fgets(s, 50, stdin);
	nbrcara = strlen(s);

	for (i = 0 ; i <= nbrcara ; i++){
		if (s[i] >= 65 && s[i] <=90){
			s[i] = s[i] + 32;
		}
	}

	printf("Voici la séquence sans majuscules : %s\n", s);


return 0;
}
