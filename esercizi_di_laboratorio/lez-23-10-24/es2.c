#include <stdio.h>

int main(void)
{
    float n,somma = 0;
    printf("Inserisci un numero :");
    scanf("%f",&n);

    while(n> 0)
    {
        somma += n;
        printf("%0.2f + ", n);
        n--;
    }

    printf("= %0.2f\n",somma);
}