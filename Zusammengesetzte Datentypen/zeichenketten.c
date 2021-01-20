#include <stdio.h>
#include <string.h>

int main(){

    char text[] = {'B', 'e', 'i', 's', 'p', 'i', 'e', 'l'};
    printf("%c%c%c%c%c%c%c%c", text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7]);

    char gruss[] = "Guten Tag!";
    printf("\n%s", gruss);

    // Nutzereingabe mit scanf
    // Problem: Nur die Zeichen bis zum erste Leerzeichen werden gespeichert
    // Und: Werteobergrenzenüberschreitungen möglich
//    printf("\nBitte geben Sie einen Text ein (maximal 20 Zeichen:\n");
//    char eingabe[20];
//    scanf("%s", eingabe);
//    printf("Es wurde eingegeben: %s", eingabe);


    // Nutzereingabe mit gets
    // Problem: Werteobergrenzenüberschreitung möglich
//    printf("\nBitte geben Sie einen Text ein (maximal 20 Zeichen:\n");
//    char eingabe[20];
//    gets(eingabe);
//    printf("Es wurde eingegeben: %s", eingabe);


    // Nutzereingabe mit fgets
    // Problem: Es wird auch ein \n mit eingelesen
    // wenn weniger als die maximale Anzahl an Zeichen eingegeben wurde
    printf("\nBitte geben Sie einen Text ein (maximal 20 Zeichen:\n");
    char eingabe[21];
    fgets(eingabe, 21, stdin);
    printf("Es wurde eingegeben: %s", eingabe);

    printf("\nWir wollen den Text %s in einem Satz verwenden.", eingabe);

    // Problemlösung: '\n' durch '\0' ersetzen (string.h einbinden)
    if (eingabe[strlen(eingabe) - 1] == '\n'){
        eingabe[strlen(eingabe) - 1] = '\0';
    }

    printf("\nWir wollen den Text %s in einem Satz verwenden.", eingabe);


    return 0;
}
