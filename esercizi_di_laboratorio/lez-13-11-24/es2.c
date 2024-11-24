#include <stdio.h>

#define MAX 100
int inserisci_finche(int [],int);
void stampa(int [],int);


int main(void)
{
    return 0;
}

int inserisci_finche(int v[],int d)
{
    int s= 0, i = 0;
    while ( s < 1000 && i < MAX)
    {
        printf("Inserisci un numero : ");
        scanf("%d",&v[i]);
        s + = v[i];
        i++;
    }

    return (i+1);
}

void stampa(int v[],int d)
{
    int i,s = 0;
    for(int i = 0; i < d ; i++)
    {
        printf("%d \t",v[i]);
        s += v[i];
    }
    printf("\nSomma = %d",s);

}