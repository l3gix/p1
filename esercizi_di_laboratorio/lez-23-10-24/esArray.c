#include <stdio.h>

int main( void )
{
    int n; 
    printf("Inserisci un numero :");
    scanf("%d",&n);
    float num[n],somma = 0;

    while ( n > 0)
    {
        num[n-1] = (float)n;
        printf(" num [ %d ] = %0.2f\n",n-1 , num[n-1]);
        somma += num[n-1];
        n--;
    }

    printf("somma = %0.2f\n", somma);

}