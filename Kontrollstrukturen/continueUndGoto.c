#include <stdio.h>

int main(){

    for (int i = 1; i <= 5; i++){
        if (i == 3){
            continue;
        }
        printf("%i\n", i);
    }



    printf("\nWir wreden drei mal eine Zahl mit einer Zahl multiplizieren.");

    int ersteZahl, zweiteZahl, ergebnis;
    int i = 0;

    while (i < 3){
        printf("\nBitte geben sie die erste Zahl ein: ");
        scanf("%i", &ersteZahl);
        printf("\nBitte geben sie die zweite Zahl ein: ");
        scanf("%i", &zweiteZahl);

        if (ersteZahl == 0 || zweiteZahl == 0){
            goto Sprung;
        }

        ergebnis = ersteZahl * zweiteZahl;
        printf("Ergebnis: %i", ergebnis);
        i++;

        if (i == 3){
            return 0;
        }

    }

    Sprung:
        printf("\nKeine der Zahlen darf 0 sein! Programm beendet...\n");

    return 0;
}
