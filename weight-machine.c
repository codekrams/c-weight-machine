#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gewichtsstein=64;
    int gewichtszaehler;
    int gewichtseingabe;

    printf("Bitte geben Sie das Gewicht der Ware ein von 0 bis 127 kg:\n");
    scanf("%i", &gewichtseingabe);

    if (gewichtseingabe>0 && gewichtseingabe<128){
    while(gewichtseingabe>0){
            gewichtszaehler=gewichtseingabe/gewichtsstein;
            printf("%i %i-Kilo-Gewicht\n", gewichtszaehler, gewichtsstein);
            gewichtseingabe=gewichtseingabe%gewichtsstein;
            gewichtsstein=gewichtsstein/2;
        }
        }
    else {
        printf("Fuer dieses Gewicht sind keine Gewichte vorhanden");
    }
}