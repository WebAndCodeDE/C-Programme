#include <stdio.h>

int main() {

    int zahl = 3;
    printf("Die Zahl ist eine: %i", zahl);

    zahl = 3 + 5;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl = 8-3;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl = 10 * 2;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl = 10 / 2;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);

    int rest = zahl % 2;
    printf("\n\nDer Rest bei Zahl / 2: %i", rest);

    zahl += 5;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl -= 3;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl *= 2;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl /= 4;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);

    zahl++;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);
    zahl--;
    printf("\n\nDie Zahl ist jetzt eine: %i", zahl);

    int ersteZahl = 5, zweiteZahl = 12;
    int ergebnis = ersteZahl + zweiteZahl;
    printf("\n\nErgebnis: %i", ergebnis);

    printf("\n\nErgebnis: %i", ersteZahl + zweiteZahl);

    return 0;
}
