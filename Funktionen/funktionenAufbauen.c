// Das ist ein schlechter Stil, man sollte über der Main() Funktionen deklarieren
// und unter der Main() die Funktionen implementieren.

#include <stdio.h>

void zweiteFunktion(){
    printf("Funktion aufgerufen.");
}

void funkEins(){
    printf("Funktion 1\n");
}

void funkZwei(){
    printf("Funktion 2\n");
    funkFuenf();
}

void funkDrei(){
    printf("Funktion 3\n");
    funkZwei();
}

void funkVier(){
    printf("Funktion 4\n");
}

void funkFuenf(){
    printf("Funktion 5\n");
}

void ersteFunktion();

int main(){
    //zweiteFunktion();
    //ersteFunktion();
    funkDrei();

    return 0;
}


void ersteFunktion(){
    printf("Funktion aufgerufen.");
}
