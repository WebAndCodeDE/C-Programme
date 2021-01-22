#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    printf("Willkommen im Saftladen!\n");
    printf("Wieviel Geld haben Sie dabei?\n");

    float budget;
    scanf("%f", &budget);

    char einkaeufe[100] = "";
    char eingabe, temp;

    int auswahl;

    while (true){
        printf("Wir haben folgendes im Angebot:");
        printf("\n1 : Orangensaft, 1,20");
        printf("\n2 : Apfelsaft, 1,10");
        printf("\n3 : Traubensaft, 1,90");
        printf("\n4 : Multivitaminsaft, 1,35");

        printf("\nMoechten Sie etwas kaufen? (j fuer Ja eingeben): ");
        scanf("%c", &temp);
        scanf("%c", &eingabe);
        if (eingabe != 'j' && eingabe != 'J'){
            break;
        }

        printf("\nIhre Auswahl: ");
        scanf("%c", &temp);
        scanf("%i", &auswahl);

        switch (auswahl){

        case 1:
            if (budget >= 1.20){
                budget -= 1.20;
                char aktuellerKauf[] = "Orangensaft, ";
                strncat(einkaeufe, aktuellerKauf, strlen(aktuellerKauf));
            } else {
                printf("\nDas koennen sie sich nicht leisten!");
            }
            break;
        case 2:
            if (budget >= 1.10){
                budget -= 1.10;
                char aktuellerKauf[] = "Apfelsaft, ";
                strncat(einkaeufe, aktuellerKauf, strlen(aktuellerKauf));
            } else {
                printf("\nDas koennen sie sich nicht leisten!");
            }
            break;

        case 3:
            if (budget >= 1.90){
                budget -= 1.90;
                char aktuellerKauf[] = "Traubensaft, ";
                strncat(einkaeufe, aktuellerKauf, strlen(aktuellerKauf));
            } else {
                printf("\nDas koennen sie sich nicht leisten!");
            }
            break;

        case 4:
            if (budget >= 1.35){
                budget -= 1.35;
                char aktuellerKauf[] = "Multivitaminsaft, ";
                strncat(einkaeufe, aktuellerKauf, strlen(aktuellerKauf));
            } else {
                printf("\nDas koennen sie sich nicht leisten!");
            }
            break;

        default:
            printf("Ungueltige Eingabe!");
        }
    }

    // Löscht das letzte Komma in der Zeichenkette
    einkaeufe[strlen(einkaeufe) - 2] = '\0';

    printf("\nDie eingekauften Saefte: %s", einkaeufe);
    printf("\nRestbedget: %f", budget);



    return 0;
}
