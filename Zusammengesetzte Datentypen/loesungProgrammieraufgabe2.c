#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){

    float eingabe[3];

    printf("Erste Zahl: ");
    scanf("%f", &eingabe[0]);

    printf("Zweite Zahl: ");
    scanf("%f", &eingabe[1]);

    printf("Dritte Zahl: ");
    scanf("%f", &eingabe[2]);



    printf("\nSumme: %f", eingabe[0] + eingabe[1] + eingabe[2]);
    printf("\nDurchschnitt: %f", (eingabe[0] + eingabe[1] + eingabe[2]) / 3);



    char eingabeText[21];
    char temp;

    printf("\n\nText (maximal 20 Zeichen): ");
    scanf("%c", &temp);
    fgets(eingabeText, 21, stdin);

    if (eingabeText[strlen(eingabeText) - 1] == '\n'){
        eingabeText[strlen(eingabeText) -1] = '\0';
    }

    printf("\nDer Text besteht aus %i Zeichen.\n", strlen(eingabeText));


    return 0;
}
