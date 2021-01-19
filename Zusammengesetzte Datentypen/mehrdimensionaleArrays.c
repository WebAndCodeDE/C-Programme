#include <stdio.h>

int main(){

    int erstesZweiDimArray[2][3];

    erstesZweiDimArray[0][0] = 2;
    erstesZweiDimArray[0][1] = 4;
    erstesZweiDimArray[0][2] = 6;

    erstesZweiDimArray[1][0] = 3;
    erstesZweiDimArray[1][1] = 6;
    erstesZweiDimArray[1][2] = 9;

    // als Matrix ausgeben
    printf("%i %i %i", erstesZweiDimArray[0][0], erstesZweiDimArray[0][1], erstesZweiDimArray[0][2]);
    printf("\n%i %i %i", erstesZweiDimArray[1][0], erstesZweiDimArray[1][1], erstesZweiDimArray[1][2]);


    // zweidimensionales Array deklarieren und gleichzeitig initialisieren
    int zweitesZweiDimArray[3][5] = {{5, 10, 15, 20, 25},
                                    {10, 20, 30, 40, 50},
                                    {20,40, 60, 80, 100}};

    printf("\nZweite Matrix:");
    printf("\n%i\t%i\t%i\t%i\t%i", zweitesZweiDimArray[0][0], zweitesZweiDimArray[0][1], zweitesZweiDimArray[0][2], zweitesZweiDimArray[0][3], zweitesZweiDimArray[0][4]);
    printf("\n%i\t%i\t%i\t%i\t%i", zweitesZweiDimArray[1][0], zweitesZweiDimArray[1][1], zweitesZweiDimArray[1][2], zweitesZweiDimArray[1][3], zweitesZweiDimArray[1][4]);
    printf("\n%i\t%i\t%i\t%i\t%i", zweitesZweiDimArray[2][0], zweitesZweiDimArray[2][1], zweitesZweiDimArray[2][2], zweitesZweiDimArray[2][3], zweitesZweiDimArray[2][4]);



    float drittesZweiDimArray[2][4] = {{12.3, 5.5, 6.9, 11.9}, {23.5, 99.4, 3.3, 8.7}};


    // dreidimensionales Array
    int dreiDimArray[2][3][4] = {{{5, 10, 15, 20}, {10, 20, 30, 40}, {20, 40, 60, 80}},
                                {{40, 80, 120, 160}, {80, 160, 240, 320}, {160, 320, 480, 640}}};

    return 0;
}
