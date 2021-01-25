#include <stdio.h>

// Aufzaehlung von Konstanten

enum {rot, gelb, blau, gruen};
enum wochentage {MO = 1, DI, MI, DO = 10, FR, SA, SO};


int main(){

    printf("Rot: %i, Gelb: %i, Blau: %i, Gruen: %i", rot, gelb, blau, gruen);

    printf("\nMontag: %i, Mittwoch: %i, Sonntag: %i", MO, MI, SO);

    int montag = MO, dienstag = DI, mittwoch = MI;
    printf("\n%i\n%i\n%i", montag, dienstag, mittwoch);




    return 0;
}
