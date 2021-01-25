#include <stdio.h>
#include <string.h>

char *textZurueck();

int main(){

    int variable = 10;

    printf("\nAdresse der Variable in Dezimal: %i", &variable);
    printf("\nAdresse der Variable in Hexadezimal: %x\n", &variable);

    int *zeigerEins;

    zeigerEins = &variable;

    printf("\nAdresse Zeigen: %x\nWert Zeiger: %i", zeigerEins, *zeigerEins);

    (*zeigerEins)++;
    printf("\nWert des Zeigers letzt: %i", *zeigerEins);
    printf("\nWert der Variable jetzt: %i", variable);

    *zeigerEins++;
    printf("\nAdresse des Zeigers letzt: %x", zeigerEins);
    printf("\nAdresse der Variable jetzt: %x", &variable);
    printf("\nWert des Zeigers jetzt: %i", *zeigerEins);



    // Pointer auf Array setzen

    int zahlen[] = {5, 12, 17};
    int *zeigerArray = zahlen; // Bei Arrays kein Sternchchen (*)... nur bei Variablen
    printf("\nZahl 1: %i", *zeigerArray);
    zeigerArray++;
    printf("\nZahl 2: %i", *zeigerArray);

    printf("\nText zurueck: %s", textZurueck());

    return 0;
}

// Pointer mit Funktion mit Array-Rückgabe
char *textZurueck(){
    return "Hallo, hier bin ich...";
}


