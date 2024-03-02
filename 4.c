#include<stdio.h>
#include<stdlib.h>

/*Se cere de la tastatură un întreg 0<n<=10, iar apoi n valori întregi distincte. Apoi se cere un întreg 0<m<=10, iar apoi m valori întregi distincte. Pornind de la cele două serii se cere să se afișeze:
Reuniunea lor - toate elementele care există cel puțin într-o serie, luate câte o singură dată
Intersecția lor - toate elementele comune*/



void calculateUnion(int n, int set1[], int m, int set2[]) {
    int i = 0, j = 0;

    printf("Reuniunea lor: ");
    while (i < n && j < m) {
        if (set1[i] < set2[j]) {
            printf("%d ", set1[i++]);
        } else if (set2[j] < set1[i]) {
            printf("%d ", set2[j++]);
        } else {
            printf("%d ", set1[i++]);
            j++;
        }
    }

    while (i < n) {
        printf("%d ", set1[i++]);
    }
    while (j < m) {
        printf("%d ", set2[j++]);
    }
}


void calculateIntersection(int n, int set1[], int m, int set2[]) {
    int i = 0, j = 0;

    printf("\nIntersectia lor: ");
    while (i < n && j < m) {
        if (set1[i] < set2[j]) {
            i++;
        } else if (set2[j] < set1[i]) {
            j++;
        } else {
            printf("%d ", set1[i++]);
            j++;
        }
    }
}

int main() {
    int n, m;
    int set1[10], set2[10];

    
    printf("Introduceti dimensiunea primei multimi (0 < n <= 10): ");
    scanf("%d", &n);
    printf("Introduceti %d valori distincte pentru prima multime:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &set1[i]);
    }

  
    printf("Introduceti dimensiunea celei de-a doua multimi (0 < m <= 10): ");
    scanf("%d", &m);
    printf("Introduceti %d valori distincte pentru a doua multime:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &set2[i]);
    }

   
    calculateUnion(n, set1, m, set2);
    calculateIntersection(n, set1, m, set2);

    return 0;
}
