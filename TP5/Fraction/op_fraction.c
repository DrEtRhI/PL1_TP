#include "type_fraction.h"

Fraction AddFraction(Fraction f1, Fraction f2){
	Fraction fsom;
	
	fsom.den = f1.den * f2.den;
	fsom.num = (f1.num*f2.den)+(f2.num*f1.den);
	
	return fsom;
}

Fraction MultFraction(Fraction f1, Fraction f2){
	Fraction fmul;
	
	fmul.num = f1.num * f2.num;
	fmul.den = f1.den * f2.den;

	return fmul;
}

int EgalFraction(Fraction f1, Fraction f2){
	
	return (((f1.num * f2.den) - (f2.num * f1.den)) == 0);
 	
}
