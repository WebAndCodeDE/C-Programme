#include <stdio.h>

int main(){

    int erstesArray[3];

    erstesArray[0] = 0;
    erstesArray[1] = 5;
    erstesArray[2] = 7;

    // Indexbereich wurde hiermit überschritten
    // möglich, sollte aber vermieden werden
    erstesArray[3] = 10;

    printf("Erste Zahl: %i", erstesArray[0]);
    printf("\nZweite Zahl: %i", erstesArray[1]);
    printf("\nDritte Zahl: %i", erstesArray[2]);
    printf("\nVierte Zahl: %i", erstesArray[3]);

    int anzahl = sizeof(erstesArray) / sizeof(int);
    printf("\n\nDas Array hat %i Elemente", anzahl);


    // Array-Werte erneut ausgeben
    // möglicher Fehler nach Verwendung eines Array-Wertes
    printf("\n\nErste Zahl: %i", erstesArray[0]);
    printf("\nZweite Zahl: %i", erstesArray[1]);
    printf("\nDritte Zahl: %i", erstesArray[2]);
    printf("\nVierte Zahl: %i\n", erstesArray[3]);


    return 0;
}
