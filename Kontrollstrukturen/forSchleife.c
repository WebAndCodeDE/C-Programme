#include <stdio.h>

int main(){

    for (int i = 0; i <= 10; i++){
        printf("%i\n", i);
    }




    for (int i = 0; i <= 50; i += 5){
        printf("%i\n", i);
    }




    int schrittLaenge;

    printf("\nBitte geben sie eine Zahl ein: ");
    scanf("%i", &schrittLaenge);
    printf("Zahlenschritte:\n");

    for (int i = 1; i <= 10; i++){
        printf("%i\n", i * schrittLaenge);
    }




    return 0;
}
