#include "type_complexe.h"

Complexe AddComplexe (Complexe c1,   Complexe c2) {
     Complexe c ;
     c.reel = c1.reel + c2.reel ;
     c.imaginaire = c1.imaginaire + c2.imaginaire ;
     return c ;
}

Complexe MulComplexe (Complexe c1,  Complexe c2) {
     Complexe c ;
     c.reel = c1.reel * c2.reel - c1.imaginaire * c2.imaginaire ;
     c.reel = c1.reel * c2.imaginaire + c1.imaginaire * c2.reel ;
     return c ;
}

int EgalComplexe (Complexe c1, Complexe c2) {
     return (c1.reel == c2.reel  && c1.imaginaire == c2.imaginaire) ;
}
