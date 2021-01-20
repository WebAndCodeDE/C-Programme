#include <stdio.h>

int main() {

    printf("### Unsere Programme");
    printf("\n1 : Zahlen raten\n2 : Texte verschl\x81sseln\n3 : Tic Tac Toe");

    int auswahl;
    printf("\n\nBitte geben sie eine Option ein: ");
    scanf("%i", &auswahl);

    switch (auswahl){

    case 1:
        printf("\nProgramm Zahlenraten gestartet.\n");
        break;

    case 2:
        printf("\nProgramm Texte verschl\x81sseln gestartet.\n");
        break;

    case 3:
        printf("\nProgramm Tic Tac Toe gestartet.\n");
        break;

    default:
        printf("\nUng\x81ltige Eingabe.\n");

    }




    return 0;
}
