#include<stdio.h>
#define NMAX 10

void inserntIntoArray(int []);
void stampa(int *p);

int main(void)
{
    int x[NMAX],*p,somma = 0, i;
    inserntIntoArray(x);
    p = x;
    for(i = 0; i < NMAX ; i++, p++)
    {
        printf("==> i : %d\n",i);
        p = &x[i];
        stampa(&x[i]);
        stampa(p);
        somma += *p;
    }

    printf("Somma : %d\n",somma);
    return 0;
}

void inserntIntoArray(int x[])
{
    int i = 0;
    for(; i < NMAX ; i++)
    {
        printf("\nv[%d] : ",i);
        scanf("%d",&x[i]);
    }
}

void stampa(int *p)
{
    printf("----------");
    printf("Valore : %d\nIndirizzo : %p\n",*p,p);
}
