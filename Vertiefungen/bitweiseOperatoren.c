#include <stdio.h>
#include <stdlib.h>

int main(){
    char binaerSting[2];
    int x, y, z;
    x = 5; // 0101
    y = 9; // 1001
    printf("\ny binaer: %s\n", itoa(y, binaerSting, 2)); // Den y-Wert in binaerer Form anzeigen

    z = x & y; // 0001 (maskiert x mit y)
    printf("Bei UND ist z: %i\n", z);

    z = x | y; // 1101
    printf("Bei ODER ist z: %i\n", z);

    z = x ^ y; // 1100
    printf("Bei EXLUSIV-ODER ist z: %i\n", z);

    z = x << 1; // 1010
    printf("Bei Verschiebung der Bits von x um eine Stelle nach links ist z: %i\n", z);

    z = y >> 1; // 0100
    printf("Bei Verschiebung der Bits von y um eine Stelle nach rechts ist z: %i\n", z);


    printf("\nz binaer: %s", itoa(z, binaerSting, 2));

    return 0;
}
