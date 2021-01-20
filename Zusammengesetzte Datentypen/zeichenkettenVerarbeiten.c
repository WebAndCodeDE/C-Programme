#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

    char text[] = "Das ist ein Beispieltext";
    printf("%s", text);
    printf("\nDer Text besteht aus %i Zeichen", strlen(text));

    char zweiterText[] = " mit mehr Text...";

    // strncat verbindet text mit zweiterText
    // strlen(zweiterText) gibt die Anzahl der benötigten Zeichen von zweiterText an
    strncat(text, zweiterText, strlen(zweiterText));
    printf("\n%s", text);

    // mit dem Befehl strcspn(text, "D") + 1 sucht man das Zeichen "D" im Text-Array "text"
    printf("\nDas Zeichen D tritt an Stelle %i auf.", strcspn(text, "D") + 1);

    // mit dem Befehl strpbrk kann man den text ab einem bestimmten Zeichen Anzeigen lassen
    printf("\nText ab Zeichen B: %s", strpbrk(text, "B"));


    char dritterText[20];
    // der Befehl strspy kopiert text nach dritter Text
    strcpy(dritterText, text);
    printf("\n%s", dritterText);


    // aus stdlib.h
    char zahlenString[] = "123";

    printf("\n\n\n%i", zahlenString);

    int ganzZahl = atoi(zahlenString);
    printf("\n%i", ganzZahl);

    float kommaZahl = atof(zahlenString);
    printf("\n%f", kommaZahl);

    return 0;
}
