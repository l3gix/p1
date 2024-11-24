#include <stdio.h>

int main()
{
    int numero = -2,somma = 0;

    while( numero != -1)
    {
        printf("inserisci un numero (-1 per uscire ) : ");
        scanf("%d",&numero);

        while (numero > 0)
        {
            somma += numero % 10;
            numero /= 10;

            
        }

        printf("somma numeri : %d\n",somma);
        somma = 0;
    }

    return 0;
    
}