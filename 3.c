#include<stdio.h>
#include<stdlib.h>

/*Se cere de la tastatură un întreg 0<n<=10, iar apoi n valori întregi. 
Apoi se cere un întreg 0<m<=10, iar apoi m valori întregi. 
În final se cere în întreg 0<=pos<=10. Se cere să se insereze prima serie de valori în interiorul celei de a doua serii,
 începând de la poziția pos și să se afișeze seria rezultată.*/


int main() {
    int n, m, pos;
    int i, j, k;
    int N[30], M[30];

    do {
        printf("n=");
        scanf("%d", &n);
        printf("m=");
        scanf("%d", &m);
        printf("pos=");
        scanf("%d", &pos);
    } while (n <= 0 || n > 10 || m <= 0 || m > 10 || pos < 0 || pos > 10);

    printf("Valori pentru prima serie: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &N[i]);
    }

    printf("Valori pentru a doua serie: ");
    for (j = 0; j < m; j++) {
        scanf("%d", &M[j]);
    }

    // Verificarea existentei pozitiei alese in seria 2
    if (m >= pos) {
        for (i = 0; i < n; i++) {  // Parcurgerea seriei N
            for (k = m - 1; k >= pos; k--) {  // Shiftarea elementelor din M dupa pozitie
                M[k + 1] = M[k];
            }
            M[pos] = N[i];  // Inserarea elementului din N in M
            m++;  // Incrementarea dimensiunii seriei M
            pos++;  // Incrementarea pozitiei pentru inserare
        }
    }

    printf("\nVector rezultat:\n");
    for (j = 0; j < m; j++) {
        printf("%d ", M[j]);
    }

    return 0;
}
