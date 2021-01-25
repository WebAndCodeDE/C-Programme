#include <stdio.h>
#include "funktionen.c"
#include "Moduldateien/quadratFunktion.c"



int main(){

    float radius = 3.5;
    printf("\nKreisflaeche: %f\n", kreisflaeche(radius));

    float laenge = 2, breite = 5;
    printf("\nRechtecksflaeche: %f\n", rechteckFlaeche(laenge, breite));

    float seitenLaenge = 3.5;
    printf("\nQuadratflaeche: %f\n", quadratFlaeche(seitenLaenge));

    return 0;
}
