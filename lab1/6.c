#include<stdio.h>
#include<stdlib.h>

/*Se cer 6 numere reale de la tastatură, x1, y1, x2, y2, x, y. 
Se cere să se determine dacă punctul (x,y) este în interiorul sau pe laturile dreptunghiului format de punctul (x1,y1) 
care este colțul din stânga jos și punctul (x2,y2) care este colțul din dreapta sus.**/

int main()
{
    float x1,y1,x2,y2,x,y;

    printf("x1 si y1:");
    scanf("%f %f",&x1,&y1);
    printf("x2 si y2:");
    scanf("%f %f",&x2,&y2);
printf("x si y:");
scanf("%f %f ",&x,&y);

  // Verificarea dacă punctul se află în interiorul sau pe laturile dreptunghiului
    if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2)) {
        printf("Punctul (%.2f, %.2f) este in interiorul dreptunghiului.\n", x, y);
    } else if ((x == x1 || x == x2) && (y >= y1 && y <= y2)) {
        printf("Punctul (%.2f, %.2f) se afla pe latura dreapta a dreptunghiului.\n", x, y);
    } else if ((y == y1 || y == y2) && (x >= x1 && x <= x2)) {
        printf("Punctul (%.2f, %.2f) se afla pe latura de sus sau de jos a dreptunghiului.\n", x, y);
    } else {
        printf("Punctul (%.2f, %.2f) nu se afla in interiorul sau pe laturile dreptunghiului.\n", x, y);
    }

    return 0;
}