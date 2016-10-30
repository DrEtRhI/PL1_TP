#include <stdio.h>

int main(){
	char c = sizeof(char);
	int i = sizeof(int);
	long unsigned int l = sizeof(long);
	double d = sizeof(double);
	
	
	printf("char : %d octets\n", c);
	printf("int : %d octets\n", i);
	printf("long : %ld octets\n", l);
	printf("double : %lf octets\n", d);
}
