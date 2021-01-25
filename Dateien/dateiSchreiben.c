#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    FILE *datei;

    datei = fopen("c:/Temp/Beispiel_schreiben.txt", "w");

    char option, temp;
    char eingabe[31];

    while(true){
        printf("Moechten sie etwas in die Datei schreiben?\n");
        printf("j fuer Ja eingeben: ");
        option = getchar();
        temp = getchar();

        if(option == 'j' || option == 'J'){
            printf("Ihre Eingabe (maximal 30 Zeichen):");
            fgets(eingabe, 31, stdin);
            fputs(eingabe, datei);
        } else {
            break;
        }
    }

    fclose(datei);

    return 0;
}
