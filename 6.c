#include<stdio.h>
#include<stdlib.h>

/*Se cer de la tastatură maxim 100 valori întregi, până la întâlnirea valorii 0, care nu va face parte din șirul introdus. Se cere să se afișeze secvența din numere strict crescătoare formată din cele mai multe numere. 
Dacă există mai multe asemenea secvențe, se va afișa doar prima dintre ele*/

int main() {
    int numar, precedent, lungimeMaxima = 0, lungimeCurenta = 1, pozitieMaxima = 0, pozitieCurenta = 0;

    // Citirea valorilor până când se întâlnește 0
    do {
        printf("Introduceti un numar (0 pentru a opri): ");
        scanf("%d", &numar);

        if (numar != 0) {
            if (pozitieCurenta == 0) {
                precedent = numar;
                pozitieCurenta++;
            } else {
                if (numar > precedent) {
                    lungimeCurenta++;
                    precedent = numar;
                } else {
                    if (lungimeCurenta > lungimeMaxima) {
                        lungimeMaxima = lungimeCurenta;
                        pozitieMaxima = pozitieCurenta - lungimeCurenta;
                    }
                    precedent = numar;
                    lungimeCurenta = 1;
                }
                pozitieCurenta++;
            }
        }
    } while (numar != 0);

    // Verificare dacă ultima secvență are lungime maximă
    if (lungimeCurenta > lungimeMaxima) {
        lungimeMaxima = lungimeCurenta;
        pozitieMaxima = pozitieCurenta - lungimeCurenta;
    }

    // Afisare secventa cu lungimea maxima
    printf("Secventa strict crescatoare cu cea mai mare lungime este: \n");
    for (int i = 0; i < lungimeMaxima; i++) {
        printf("%d ", pozitieMaxima + i);
    }
    printf("\n");

    return 0;
}
