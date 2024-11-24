#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,i,input,cifre = 0,somma = 0;

    printf("inserisci un numero : ");
    scanf("%d",&n);

    input = n;
    while(input)
    {
        input /= 10;
        cifre++;
    }

    //printf("cifre = %d " , cifre);

    input = n;
    while (input)
    {
        somma += pow(input % 10 , cifre);
        input /= 10;
    }

    //printf("sommaNumeri = %d\n", somma );

    if( n == somma) printf("Numero Amstrong\n");
    else printf("Non numero Amstrong\n");

    return 0;

}