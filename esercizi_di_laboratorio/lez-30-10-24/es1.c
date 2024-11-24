#include <stdio.h>
#define DIM 4
int main(void)
{
    int v[DIM];
    int n;

    for ( int i = 0; i < DIM ; i++)
    {
        printf("Valore array : ");
        scanf("%d",&v[i]);
    }

    printf("inserisci il numero da inserire \n");
    scanf("%d",&n);

    int somma = 0;
    for( int i = 0 ; i < DIM-1 ; i++)
    {
        for(int j = i+1 ; j < DIM ; j++)
        {
            somma = v[i] + v[j];
            if(somma == n)
            printf("%d,%d\n",i,j);
        }
    }

    return 0;
}