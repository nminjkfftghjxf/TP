#include<stdio.h>
#include<stdlib.h>

/*Se cere de la tastatură un întreg 0<n<=100, iar apoi n valori reale.
 Se cere să se elimine toate duplicatele și să se afișeze valorile rămase.*/

 int main()
 {
    int n;
  int i,j,k;
  int v[100];

printf("n=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&v[i]);
}

printf("Vectorul initial:\n");

for(i=0;i<n;i++)
{
    printf("%d ",v[i]);
}

//eliminarea duplicatelor
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {

        if(v[i]==v[j])
        {
            for(k=j;k<n-1;k++)
            {
            v[k]=v[k+1]; //shoftare la stanga
            }
            n--;
        }
    }

}


printf("\nVectorul rezultat:\n");

for(i=0;i<n;i++)
{
    printf("%d ",v[i]);
}
 
    return 0;
 }