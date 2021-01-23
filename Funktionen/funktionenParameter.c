#include <stdio.h>
#include <string.h>

// Funktionen mit Parametern deklarieren
void willkommen(char meinName[]);
void zahlQuadrieren(int z);
void zahlTeilen(int a, int b);


// "void" als Parameter nicht erforderlich (void bedeutet: kein Parameter!)
int main(void){

    char name[21];
    printf("Hallo, ich bin der Computer. Wie heissen sie? : ");
    fgets(name, 21, stdin);

    if (name[strlen(name) - 1] == '\n'){
        name[strlen(name) - 1] = '\0';
    }

    // Funktionen mit Parametern aufrufen
    willkommen(name);

    printf("\nBitte geben Sie eine Zahl ein: ");
    int zahl;
    scanf("%i", &zahl);
    zahlQuadrieren(zahl);

    int a, b;
    printf("\nAls naechtes teilen wir Zahlen. Bitte geben Sie den Zaehler ein: ");
    scanf("%i", &a);
    printf("\nBitte geben Sie den Nenner ein: ");
    scanf("%i", &b);
    zahlTeilen(a, b);

    return 0;
}

void willkommen(char meinName[]){
    printf("Herzlich willkommen %s", meinName);
}

void zahlQuadrieren(int z){
    int ergebnis = z * z;
    printf("Die Quadratzahl von %i ist: %i", z, ergebnis);
}

void zahlTeilen(int a, int b){
    float ergebnis = (float)a / (float)b;
    printf("%i / %i ergibt: %f", a, b, ergebnis);
}
