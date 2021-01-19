#include <stdio.h>

//Konstante durch Makro definieren

#define PI 3.141592

int main() {

    // Konstante mit const definieren
    const float mWSt = 0.19;

    float nettoPreis = 12.45;
    float bruttoPreis = nettoPreis + nettoPreis * mWSt;
    printf("Bruttopreis: %f", bruttoPreis);

    float radius = 3.44;
    float flaechenInhalt = PI * radius * radius;
    printf("\nFlaecheninhalt: %f", flaechenInhalt);


    return 0;
}
