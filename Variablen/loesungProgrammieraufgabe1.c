 #include <stdio.h>

 int main(){

    int ersteZahl, zweiteZahl, summe, differenz, produkt;
    float quotient;
    char zeichen, temp;

    printf("Erste Zahl: ");
    scanf("%i", &ersteZahl);

    printf("Zweite Zahl: ");
    scanf("%i", &zweiteZahl);

    summe = ersteZahl + zweiteZahl;
    printf("\nSumme: \t\t%i", summe);

    differenz = ersteZahl - zweiteZahl;
    printf("\nDifferenz: \t%i", differenz);

    produkt = ersteZahl * zweiteZahl;
    printf("\nProdukt: \t%i", produkt);

    quotient = (float)ersteZahl / (float)zweiteZahl;
    printf("\nQuotient: \t%f\n", quotient);

    printf("\nEin Zeichen zwischen a und z eingeben: ");
    temp = getchar(); // Fängt die Tastatureingabe "\n" ab!
    zeichen = getchar();
    printf("Zeichen: %c%c%c\n", zeichen-1,zeichen,zeichen+1);

    return 0;
 }
