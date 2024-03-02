#include<stdio.h>
#include<stdlib.h>

/*Se cere de la tastatură un întreg 2<n<=10, iar apoi n valori reale. 
Se cere să se afișeze cele mai mici 3 valori din serie.*/


// Functie pentru sortarea tabloului in ordine crescatoare
void sortare(int n, float arr[]) {
    float temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Introduceti numarul de valori (2 < n <= 10): ");
    scanf("%d", &n);

    // Verificare daca n este in intervalul specificat
    if (n <= 2 || n > 10) {
        printf("Numarul introdus nu se afla in intervalul permis.\n");
        return 1;
    }

    float valori[n];
    printf("Introduceti %d valori reale:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valori[i]);
    }

    // Sortare in ordine crescatoare
    sortare(n, valori);

    // Afisare celor mai mici 3 valori
    printf("Cele mai mici 3 valori din serie sunt:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", valori[i]);
    }
    printf("\n");

    return 0;
}
