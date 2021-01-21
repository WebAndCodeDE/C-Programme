#include <stdio.h>


int main(){

    int aufgabe1, aufgabe2, aufgabe3, punkte = 0;

    printf("1. 40 + 120 = ");
    scanf("%i", &aufgabe1);
    if (aufgabe1 == 160) {
        printf("Super!\n");
        punkte++;
    } else {
        printf("Leider falsch!\n");
    }

    printf("2. 77 + 21 = ");
    scanf("%i", &aufgabe2);
    if (aufgabe2 == 98) {
        printf("Super!\n");
        punkte++;
    } else {
        printf("Leider falsch!\n");
    }

    printf("3. 80 + 90 = ");
    scanf("%i", &aufgabe3);
    if (aufgabe3 == 170) {
        printf("Super!\n");
        punkte++;
    } else {
        printf("Leider falsch!\n");
    }


    char hauptstadt, temp;

    printf("\nWas ist die Landeshauptstadt von Bayern?\nA. BERLIN\nB. KOELN\nC. MUENCHEN\nD. Hamburg\n");
    scanf("%c", &temp);
    printf("\nAntwort: ");
    scanf("%c", &hauptstadt);

    switch (hauptstadt){

    case 'A':
        printf("Leider falsch!");
        break;

    case 'B':
        printf("Leider falsch!");
        break;

    case 'C':
        printf("Super!");
        punkte++;
        break;

    case 'D':
        printf("Leider falsch!");
        break;

    default:
        printf("Ungueltige eingabe!");
        break;

    }

    int bundeslaender;

    printf("\nWieviele Bundeslaender hat Deutschland?\n");
    scanf("%c", &temp);
    printf("\nAntwort: ");
    scanf("%i", &bundeslaender);

    if (bundeslaender == 16){
        printf("Super, deine Antwort ist richtig!");
        punkte++;
    } else {
        printf("Leider ist deine Antwort falsch!");
    }

    if (punkte == 5){
        printf("\nDu hast die volle Punktezahl erreicht - Gratulation!\n");
    } else {
        printf("\nErreichte Punktezahl: %i\n", punkte);
    }

    return 0;
}
