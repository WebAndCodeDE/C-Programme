#include <stdio.h>
#include <stdbool.h>


int main(){

    bool kontrolle = false;

    while (kontrolle){
        printf("Schleife durchlaufen");
    }



    do {
        printf("do-while-Schleife durchlaufen.\n");
    } while (kontrolle);




    int eingabe;

    do {
        printf("Was ist das Ergebnis aus 3 x 5?\n");
        scanf("%i", &eingabe);
    } while (eingabe != 15);

    printf("Die Antwort ist richtig!");

    return 0;
}
