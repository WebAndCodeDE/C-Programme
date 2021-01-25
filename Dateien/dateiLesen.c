#include <stdio.h>



int main(){

    FILE *datei;

    datei = fopen("c:/Temp/Beispiel.txt", "r");

    if(datei == NULL){
        printf("\nDatei konnte nicht geoeffnet werden.");
    } else {
        char c;
        c = fgetc(datei);
        while(c != EOF){
            printf("%c", c);
            c = fgetc(datei);
        }
    }
    fclose(datei);

    return 0;
}
