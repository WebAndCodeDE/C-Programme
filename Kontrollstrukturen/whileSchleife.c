#include <stdio.h>
#include <stdbool.h>


int main(){

    int x = 0;

    while (x <= 50){
        printf("x = %i\n",x);
        x += 5;
    }

    int zahlenListe[5];
    int i = 0;

    while (i < 5){
        printf("Fuegen sie der Liste noch eine Zahl hinzu: ");
        scanf("%i", &zahlenListe[i]);
        i++;
    }

    printf("\nDie eingegbenen Zahlen: ");

    i = 0;
    while (i < 5){
        printf("%i ", zahlenListe[i]);
        i++;
    }



    int eingabe;
    bool zahlGefunden = false;

    // while-Schleife als Endlosschleife (Austritt mit "break" steuern
    while (true){
        printf("\nGeben sie eine der Zahlen aus der Liste ein: ");
        scanf("%i", &eingabe);


        i = 0;

        while (i < 5){
            if (eingabe == zahlenListe[i]){
                printf("\nSuper, die eingegebene Zahl ist in der Zahlenliste.\n");
                zahlGefunden = true;
                break;
            }
            i++;
        }

        if (zahlGefunden){
            break;
        }

    }


    return 0;
}
