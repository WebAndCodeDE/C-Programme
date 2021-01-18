#include <stdio.h>

int main() {

    short a = 1;
    int b = 3000;
    long c = 55000;

    float d = 55.56118999;
    double e = 55.56118999;

    char f = 'm';
    char g = 101;

    printf("short: %hi", a);
    printf("\nint: %i", b);
    printf("\nlong: %li", c);

    printf("\nfloat: %f", d);
    printf("\ndouble", e);

    printf("\nchar als Zeichen: %c", f);
    printf("\nchar als Zahl: %i", g);

    int ersteZahl = 5, zweiteZahl = 12;
    printf("\nErste Zahl: %i\nZweite Zahl: %i", ersteZahl, zweiteZahl);

    char sonderzeichen = '\341';
    printf("\nScharfes s in char gespeichert: %c", sonderzeichen);

    printf("\n\n\nUmlaute:");
    printf("\nae: \204");
    printf("\nAe: \216");
    printf("\noe: \224");
    printf("\nOe: \231");
    printf("\nue: \201");
    printf("\nUae: \232");
    printf("\nScharfes s: \341\n");


    return 0;
}
