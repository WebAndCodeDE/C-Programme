#include <stdio.h>

int main(){

    int erstesArray[3];

    erstesArray[0] = 0;
    erstesArray[1] = 5;
    erstesArray[2] = 7;


    int zweitesArray[4] = {5, 10, 15, 20};

    float drittesArray[] = {5.3, 10.2, 15.7, 20.4};

    printf("Erste Zahl: %i", erstesArray[0]);
    printf("\nZweite Zahl: %i", erstesArray[1]);
    printf("\nDritte Zahl: %i", erstesArray[2]);

    int ergebnis = zweitesArray[0] + zweitesArray[1];
    printf("\n1. + 2. Zahl aus zweitem Array: %i", ergebnis);


    return 0;
}
