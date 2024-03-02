#include<stdio.h>
#include<stdlib.h>

/*Se cer de la tastatură maxim 100 valori întregi, până la întâlnirea valorii 0, 
care nu va face parte din șirul introdus. Se cere să se extragă în două tablouri diferite valorile pare și cele impare,
 iar apoi să se afișeze fiecare dintre aceste tablouri în ordine inversă.*/


void bsort(int n, int a[]) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int i = 0, j = 0;
    int count1 = 0, count2 = 0;
    int par[100];
    int impar[100];

    do {
        printf("n=");
        scanf("%d", &n);
        if (n != 0) {
            if (n % 2 == 0) {
                par[i] = n;
                i++;
                count1++;
            } else {
                impar[j] = n;
                j++;
                count2++;
            }
        }
    } while (n != 0);

    printf("Elemente pare:\n");
    bsort(count1, par);

    for (i = 0; i < count1; i++) {
        printf("%d ", par[i]);
    }
    printf("\nElemente impare:\n");
    bsort(count2, impar);

    for (j = 0; j < count2; j++) {
        printf("%d ", impar[j]);
    }

    return 0;
}
