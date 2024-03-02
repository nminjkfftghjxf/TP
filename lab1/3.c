#include<stdio.h>
#include<stdlib.h>

/*Se cere un întreg n>=1 de la tastatură. Să se afișeze o linie descrescătoare cu înălțimea de n steluțe, în care fiecare steluță să fie cu un spațiu decalată față de cea anterioară. Exemplu pentru n=3:
*
 *
  *
*/

int main()
{
    int n; int i;int j;
    do{
        printf("n=");
        scanf("%d",&n);

    }while(n<1);

for(i=0;i<n;i++)
{
    for(j=0;j<i;j++)
    {
        printf(" ");
    }
    printf("*");   
    printf("\n");
}

    return 0;
}