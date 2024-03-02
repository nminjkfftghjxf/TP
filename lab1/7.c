#include<stdio.h>
#include<stdlib.h>

/*Se cer 4 numere întregi de la tastatură, a<b, c<d. Perechile [a,b] și [c,d] formează două segmente pe o axă oarecare,
 având ca referință originea acesteia. Se cere să se determine dacă există vreo suprapunere între cele două segmente.
Exemplu: între segmentele [1,7] și [0,3] există suprapunere*/

int main()
{
    int a,b,c,d;
printf("Dati a, b, c si :");
scanf("%d %d %d %d",&a,&b,&c,&d);

if((c<=b && b<=d)||(c<=a &&a<=d)||(a<=c && c<=b )||(a<=d && d<=b))
{
    printf("\nExista suprapunere intre [%d %d] si [%d %d]",a,b,c,d);
}else
printf("Nu exista o suprapunere!");

    return 0;
}