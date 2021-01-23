#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

bool zahlenRaten(int a);

int main(void){

    int gerateneZahl;
    printf("Bitte rate die Zahl: ");
    scanf("%i", &gerateneZahl);
    if (zahlenRaten(gerateneZahl) == 0){
        printf("Du hast leider die falsche Zahl getippt...");
    } else {
        printf("Super, du hast die richtige Zahl getippt!!!!");
    }





    return 0;
}

bool zahlenRaten(int a){
    bool wahr;
    // srand(time(NULL) sorgt dafür, dass nicht jedes mal die gleiche Zufallszahl generiert wird
    srand(time(NULL));
    int zz = (rand() % 5) + 1;
    if (a == zz){
        wahr = true;
    } else {
        wahr = false;
    }
    printf("Die Zufallszahl lautet: %i\n", zz);
    return wahr;
}

char caeserVerschluesselung(char text){
    textNeu =
}
