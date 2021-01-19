#include <stdio.h>

int main() {

    // Implizite Typumwandlung
    float ersteZahl = 5.39;
    int zweiteZahl = ersteZahl;
    float dritteZahl = zweiteZahl;
    printf("Erste Zahl: %f\nZweite Zahl: %i\nDritte Zahl: %f", ersteZahl, zweiteZahl, dritteZahl);

    // Explizite Typumwandlung
    float vierteZahl = 6.29;
    printf("\nVierte Zahl als int: %i", (int)vierteZahl);

    // Typumwandlung vei Division aus zwei Ganzzahlen
    int a = 5, b = 2;
    float ergebnis = a / b;
    printf("\nErgebnis aus %i / %i: %f", a, b, ergebnis);

    int c = 5, d = 2;
    float zweitesErgebnis = (float)c / (float)d;
    printf("\nErgebnis aus %i / %i: %f", c, d, zweitesErgebnis);


 return 0;
}
