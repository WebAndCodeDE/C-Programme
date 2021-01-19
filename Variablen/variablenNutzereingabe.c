#include <stdio.h>

int main() {

    char a;
    printf("Bitte geben Sie ein Zeichen ein: ");
    a = getchar();
    printf("Eingegeben wurde: %c", a);
    printf("\nDer ASCII-Code des Zeichens: %i", a);

    int b, temp;
    printf("\n\nBitte geben Sie noch ein Zeichen ein: ");
    temp = getchar();
    b = getchar();
    printf("Eingegeben wurde: %c", b);
    printf("\nDer ASCII-Code des Zeichens: %i\n", b);

    int c;
    printf("\n\nBitte geben Sie eine Ganzzahl ein: ");
    scanf("%i", &c);
    printf("Eingegeben wurde: %i", c);
    printf("\nDer doppelte Wert: %i", c * 2);

    float d;
    printf("\n\nBitte geben Sie eine Kommazahl ein: ");
    scanf("%f", &d);
    printf("Eingegeben wurde: %f", d);
    printf("\nDer doppelte Wert: %f", d * 2);

    char e;
    printf("\n\nBitte geben Sie noch ein Zeichen ein: ", e);
    scanf("%c", &temp);
    scanf("%c", &e);
    printf("Eingegeben wurde: %c", e);
    printf("\nDer ASCII-Code des Zeichens: %i", e);

    return 0;
}

