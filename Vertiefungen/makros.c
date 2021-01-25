// Makro-Funktionen

#include <stdio.h>

#define HALBIEREN(zahl) ((zahl) / 2)
#define GROESSER_10(zahl) ((zahl) > 10)

// Ohne aeussere Klammern wird nach Abruf der Funktion mit der *2-Ergaenzung keine Punk vor Strich-Rechnung beachtet
#define ADDIEREN(x, y) (x) + (y)

#define MULTIPLIZIEREN(x, y) (x * y)


int main(){

    int zahl = 8;

    printf("Zahl halbiert: %i", HALBIEREN(zahl));

    if (GROESSER_10(zahl)){
        printf("\nDie Zahl ist groesser als 10.");
    } else {
        printf("\nDie Zahl ist nicht groesser als 10.");
    }

    int x = 5, y = 2;
    printf("\nx + y: %i", ADDIEREN(x, y));

    // (5) + (2) * (2)
    printf("\nx + y x 2: %i", ADDIEREN(x, y) * 2);

    // (5 + 2 * 2 + 2)
    printf("\nx + 2 x y + 2: %i", MULTIPLIZIEREN(x + 2, y + 2));

    return 0;
}
