#include <stdio.h>
#include <string.h>


// Struktur erschaffen
struct Buecher{
    char titel[35];
    char autor[25];
    int seitenZahl;
    float preis;
};


int main(){

    // ersten Datensatz erstellen
    struct Buecher erstesBuch;

    // Zeichenketten nicht direkt einfügen (strcpy nutzen)
    strcpy(erstesBuch.titel, "20000 Meilen unter den Meeren");
    strcpy(erstesBuch.autor, "Jules Verne");
    erstesBuch.seitenZahl = 768;
    erstesBuch.preis = 12.90;

    // zweiten Datensatz erstellen
    struct Buecher zweitesBuch;

    strcpy(zweitesBuch.titel, "Die R\204uber");
    strcpy(zweitesBuch.autor, "Friedrich Schiller");
    zweitesBuch.seitenZahl = 368;
    zweitesBuch.preis = 8.80;

    // Inhalte ausgeben
    printf("Erstes Buch\nTitel: %s\tAutor: %s\tPreis: %f", erstesBuch.titel, erstesBuch.autor, erstesBuch.preis);
    printf("\n\nZweites Buch\nTitel: %s\t\t\tAutor: %s\tPreis: %f\n", zweitesBuch.titel, zweitesBuch.autor, zweitesBuch.preis);

    printf("\n\nDer Gesamtpreis aller Buecher: %f\n", erstesBuch.preis + zweitesBuch.preis);

    return 0;
}
