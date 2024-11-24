// a = base
// n = limite

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,n,i,somma = 0,pot;
    


    printf("inserisci la base : ");
    scanf("%d",&a);
    printf("inserisci il limite : ");
    scanf("%d",&n);

    
    for(i = 0; i <= n ; i++)
    {
        pot = pow(a,i);

        somma = somma + pot;

        printf("%d + ",pot);
    }
    
    printf(" = %d \n" ,somma);

    //pot = pow(double(a), double(n));

    //printf("%lf",pot);

    return 0;

}