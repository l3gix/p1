#include<stdio.h>

int main()
{
    double lato1,lato2,lato3;

    printf("inserisci il primo lato ");
    scanf("%lf",&lato1);
    printf("inserisci il secondo lato ");
    scanf("%lf",&lato2);
    printf("inserisci il terzo lato ");
    scanf("%lf",&lato3);
    
    if( lato1 <= ( lato2 + lato3) && 
        lato2 <= ( lato1 + lato3) && 
        lato3 <= ( lato1 + lato2) 
    ){
        if( lato1 == lato2 && lato2 == lato3 && lato1 == lato3)
        {
            printf("trangolo equlilatero\n");
        }else if(lato1 == lato2 || lato2 == lato3 || lato1 == lato3)
        {
            printf("triangolo isoscele\n");
        }else
        {
            printf("triangolo scaleno\n");
        }
    }
    return 0;

}