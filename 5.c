#include<stdio.h>
#include<Stdlib.h>

/*Se cere de la tastatură un întreg 0<n<=10, iar apoi n valori întregi. 
Se cere să se sorteze valorile astfel încât valorile impare să fie înaintea celor pare,
 iar în cadrul fiecărei parități valorile să fie sortate descrescător.*/


void customSort(int n, int arr[]) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
            else if (arr[j] % 2 == arr[j + 1] % 2 && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Introduceti dimensiunea vectorului (0 < n <= 10): ");
    scanf("%d", &n);

    int arr[10];
    printf("Introduceti %d valori intregi:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    customSort(n, arr);

    printf("Vectorul sortat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
