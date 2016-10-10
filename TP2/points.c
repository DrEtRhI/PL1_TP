#include <stdio.h>

 /* definition d'un type pour representer un point du plan par ses coordonnees */

 typedef struct {
	int abscisse ;
	int ordonnee ; } Point ;
 


int main() {
	
	char sont_alignes = 0;
	char sont_orthogonaux = 0;
	Point PointA, PointB, PointC;
	int xa, ya, xb, yb, xc, yc;
	
	printf("Entrez l'abscisse et l'ordonnee du point A(xa, ya) :\n");
	scanf("%d", &xa);
	scanf("%d", &ya);
	PointA.abscisse = xa;
	PointA.ordonnee = ya;
	printf("Entrez l'abscisse et l'ordonnee du point B(xb, yb) :\n");
	scanf("%d", &xb);
	scanf("%d", &yb);
	PointB.abscisse = xb;
	PointB.ordonnee = yb;
	printf("Entrez l'abscisse et l'ordonnee du point C(xc, yc) :\n");
	scanf("%d", &xc);
	scanf("%d", &yc);
	PointC.abscisse = xc;
	PointC.ordonnee = yc;
	
	if (PointC.ordonnee == ((((PointB.ordonnee - PointA.ordonnee)/(PointB.abscisse - PointA.abscisse)) * PointC.abscisse) + (PointA.ordonnee - ((PointB.ordonnee - PointA.ordonnee)/(PointB.abscisse - PointA.abscisse)* PointA.abscisse)))) {
		sont_alignes = 1;	
	} else if ((((PointB.abscisse - PointA.abscisse)*(PointC.abscisse - PointA.abscisse)) + ((PointB.ordonnee - PointA.ordonnee)*(PointC.ordonnee - PointA.ordonnee))) == 0) {
				sont_orthogonaux = 1;			
			}

	if (sont_alignes == 1) {
		printf("Les points A, B et C sont alignés\n");	
	} else if (sont_orthogonaux == 1) {
				printf("Les points A, B, et C sont orthogonaux\n");
			} else {
						printf("Les points A, B et C ne sont ni alignes ni orthogonaux.\n");					
					}
			



 return 0 ;
}
