//esercizo 2 
#include<stdio.h>

int main(void)
{
    int voto;
    
    printf("inserisci un voto\n");
    scanf("%d",&voto);
    if(voto > 0 && voto < 11)
    {
        if( voto >= 3 && voto <= 5 ) printf("insuficente\n");
        else if( voto == 6 ) printf("sufficiente\n");
        else if( voto >= 7 && voto <= 8 ) printf("buono\n");
        else if( voto == 9) printf("ottimo\n");
        else printf("eccelente\n");
    }
    return 0;
}