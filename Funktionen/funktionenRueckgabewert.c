#include <stdio.h>

// Bei Funktionen mit Rückgabewert wird anstatt "void" der Datentyp z.B. "int" angegeben
int addieren(int a, int b);
int subtrahieren(int a, int b);
float teilen(float a, float b);

int main(void){

    // Rueckgabewert einer Variable zuweisen
    int summe = addieren(5, 12);
    printf("Summe aus 5 + 12: %i", summe);

    // Rueckgabewert direkt verwenden
    printf("\n\nDifferenz aus 21 - 11: %i\n\n", subtrahieren(21, 11));

    // Funktion mit Ausgabe und Rueckgabewert aufrufen
    printf("Division aus 45 und 15: %f", teilen(45,15));


    return 0;
}


// Funktion mit Rueckgabewert
int addieren(int a, int b){
    int ergebnis = a + b;
    return ergebnis;
}

// Rueckgabewert in return-Anweisung berechnen
int subtrahieren(int a, int b){
    return a - b;
}

// Alles unter der return-Anweisung wird nicht mehr ausgeführt
float teilen(float a, float b){
    // Eine printf-Anweisung macht in einer Funktion mit Rueckgabewert einfach keinen Sinn - bei void-Funktionen aber schon
    printf("Der Computer rechnet noch...\n");
    return a / b;
}

