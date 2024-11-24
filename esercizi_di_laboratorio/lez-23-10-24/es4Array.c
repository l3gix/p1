#include <stdio.h>

int main(void)
{
    int dim,max = 0, min = 0;
    printf("inserisci una dimensione : ");
    scanf("%d",&dim);
    int n[dim];

    for(int i = 0; i < dim ; i++)
    {
        printf("inserisci un numero da controllare : ");
        scanf("%d",&n[i]);
    }
    
    min = n[0];
    
    for(int i = 0 ; i < dim ; i++)
    {
        if ( n[i] > max) max = n[i];
        if ( n[i] < min ) min = n[i];
    }

    printf("max = %d , min = %d \n" , max , min);
    return 0;
}