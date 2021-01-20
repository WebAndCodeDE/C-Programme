#include <stdio.h>


int main(){

    int zahl;
    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%i", &zahl);

    if (zahl == 12){
        printf("Die eingegebene Zahl entspricht einem Dutzend.");
    } else if (zahl < 12){
        printf("Die Zahl ist kleiner als ein Dutzend.");
    } else {
        printf("Die Zahl ist groesser als ein Dutzend.");
        if (zahl != 100){
            printf("\nDie Zahl ist aber nicht 100.");
        }
    }

    if (!(10 > 15)){
        printf("\nDie Zahl 10 ist nicht groesser als 15");
    }

    printf("\n\nBitte geben sie eine weitere Zahl zwischen 1 und 100 ein: ");
    scanf("%i", &zahl);


    if (zahl >= 1 && zahl <= 100){
        printf("\nDie Eingabe war korrekt.");
        if (zahl == 1 || zahl == 100){
            printf("\nGenau an der Grenze.");
        }
    } else {
        printf("\nDie Eingabe war nicht korrekt.");
    }

    // Beispiel mit einem ternären Operator
    int x = 20, y = 15;
    int groessereZahl = (x > y) ? x : y;

    printf("\n\nWir haben noch zwei Zahlen: \nZahl 1: %i\nZahl 2: %i", x, y);
    printf("\nDie groessere Zahl hiervon: %i", groessereZahl);



    return 0;
}
