#include <stdio.h>
#include <math.h>

int main(void)
{
    float n,r;
    int numero;
    printf("inserisci un numero reale : ");
    scanf("%f",&n);


    if( n < 0)
    {
        //punto 1 opz 1 
        printf("numero convertito in positivo con la funzione : %f\n", fabs(n));
        //punto 1 opz 2
        n *= -1;
        printf("numero convertito in positivo : %f\n", n);
    }

    //punto 2 
    numero = (int) n;
    printf("numero convertito in int : %d \n",numero);

    
    //punto 3 opz 1
    if( numero % 2 == 0 )printf("Il numero e' pari \n");
    else printf("Il numero e dispari \n");

    

}