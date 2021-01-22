// Meine Lösung funktioniert leider nicht richtig!
// Hab es mit dem Abspeichern der Saefte im Array nicht hinbekommen
// Es wäre möglich ein int-Array zu benutzen, wo die Zahlenwerte von den Saeften abgelegt werden
// In der Ausgabe könnte man dann z.B. mit einer For-Schleife und If-Abfrage die Bezeichnungen entsprechend den Nummern zuordnen und ausgeben


#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    float summe;
    char temp, entscheidung, einkaeufe[100] = "";
    int i = 0, saft;

    printf("Hallo und Willkommen im Saftladen!\n\nWieviel Geld hast du in der Tasche?");
    scanf("%f", &summe);
    printf("Unser Angebot heute:\n\n1 : Orangensaft, 1,20 EUR\n2 : Apfelsaft, 1,10 EUR\n3 : Traubensaft, 1,90 EUR\n4 : Multivitaminsaft, 1,35 EUR\n");

    while (true){
        printf("\nMoechtest du etwas kaufen?");
        scanf("%c", &temp);
        scanf("%c", &entscheidung);

        if (entscheidung == 'y' || entscheidung == 'Y'){
            printf("\nBitte waehle einen Saft: ");
            scanf("%i", &saft);
            //einkaeufe[i] = saft;
            //i++;

            switch (saft){

            case 1:
                summe -= 1.20;
                einkaeufe[i] = "Orangensaft";
                i++;

                break;

            case 2:
                summe -= 1.10;
                break;

            case 3:
                summe -= 1.90;
                break;

            case 4:
                summe -= 1.35;
                break;
            }
        } else {
            printf("\nDein Restbudget betraegt: %f\nDein Einkaufskorb enthaelt folgende Saefte:\n\n", summe);

            for (int x = 0; x <= i; x++){
                printf("\n%s", &einkaeufe[x]);
            }
            break;
        }



    }





    return 0;
}
