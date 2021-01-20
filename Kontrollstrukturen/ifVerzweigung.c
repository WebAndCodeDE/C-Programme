#include <stdio.h>
#include <stdbool.h>

int main(){

    bool bedingung = true;
    if (bedingung){
        printf("Die Bedingung ist erf\201llt.");
    }

    int zahl;
    printf("\nBitte geben sie eine Zahl ein: ");
    scanf("%i", &zahl);

    if (zahl == 12){
        printf("\nDie eingegebene Zahl entspricht einem Dutzend.");
    }



    printf("\n\nBitte geben sie die Antwort auf alles ein (es muss eine Zahl sein): ");
    scanf("%i", &zahl);

    if (zahl == 42){
        printf("\nDas war die richtige Antwort!");
    } else {
        printf("\nLeider falsch.");
    }




    printf("\nBitte geben sie eine weitere zahl ein: ");
    scanf("%i", &zahl);

    if (zahl == 10){
        printf("\nSie haben die Zahl 10 eingegeben.");
    } else if (zahl == 100){
        printf("\nSie haben die Zahl 100 eingegeben.");
    } else if (zahl == 0){
        printf("\nSie haben die Zahl 0 eingegeben.");
    } else {
        printf("\nSie haben irgendeine Zahl eingegeben.");
    }



    return 0;
}
