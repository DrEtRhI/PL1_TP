
#include "type_complexe.h"
#include "es_complexe.h"
#include "op_complexe.h"

int main() {

  Complexe c1, c2 ;

  LireComplexe (&c1) ;
  LireComplexe (&c2) ;
  EcrireComplexe (AddComplexe(c1, c2)) ;

  return 0 ;
}
