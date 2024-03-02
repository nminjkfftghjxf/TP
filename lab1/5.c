#include<stdio.h>
#include<Stdlib.h>

/*Se cer numere întregi de la tastatură, până la introducerea valorii 0. 
Să se afișeze dacă toate numerele întroduse, cu excepția 0 final, formează o serie strict crescătoare sau nu.
 Nu se vor folosi vectori.
*/

int main() {
    int numar;
    int ultimulNumar;
    int strictCrescator = 1; // Presupunem că seria este strict crescătoare

    printf("Introduceti numere intregi (0 pentru a opri):\n");
    scanf("%d", &ultimulNumar); // Citim primul numar

    while (ultimulNumar != 0) {
        scanf("%d", &numar); // Citim urmatorul numar

        // Verificăm dacă numărul curent este mai mic sau egal decât ultimul număr citit
        if (numar <= ultimulNumar) {
            strictCrescator = 0; // Seria nu este strict crescătoare
            break; // Nu este nevoie să continuăm verificarea
        }

        ultimulNumar = numar; // Actualizăm ultimul numar citit pentru urmatoarea iteratie
    }

    if (strictCrescator) {
        printf("Toate numerele, cu exceptia lui 0, formeaza o serie strict crescatoare.\n");
    } else {
        printf("Numerele nu formeaza o serie strict crescatoare.\n");
    }

    return 0;
}

