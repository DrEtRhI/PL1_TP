#include <stdio.h>

void  main(){

   unsigned char x, y ;

   x = 1 ;
   while (x!=0){
	y = x ;
	x = x+1 ;
   } ;

   printf("%u\n", y) ;
}
