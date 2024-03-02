#include<stdio.h>
#include<stdlib.h>

/*Se cere un întreg pozitiv de la tastatură. Să se afișeze câte cifre impare există în el.*/

int main()
{
    int nr; 
    printf("nr=");scanf("%d",&nr);
    int count=0;

while(nr>0)
{
    int cifra=nr%10;
    if(cifra %2!=0)
    {
count++;
    }
    nr /=10;
}

printf("%d",count);
    return 0;
}