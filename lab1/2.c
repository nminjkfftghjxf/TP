#include<stdio.h>
#include<stdlib.h>

/*Ce valoare va avea fiecare variabilă după execuția următorului program? Lucrați mai întâi pe foaie, iar apoi verificați răspunsul pe calculator.
int a=3, b=7;
int c=--a + b++;
int d=a++ + ++b;
int e=a-- + b--;*/

int main()
{int a=3;
int b=7;

int c=--a+b++;
int d=a++ + ++b;
int e=a-- + b--;

printf("%d %d %d",c,d,e);
    return 0;
}