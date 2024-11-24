#include <stdio.h>

int main(void)
{
    int n,mod=0;
    printf("inserisci un numero : ");
    scanf("%d",&n);

    while ( n != 0)
    {
        mod = mod *10 ;
        mod += n % 10 ;
        n = n / 10;
    }

    printf("contrario %d\n",mod);
    return 0;
}