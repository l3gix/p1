#include <stdio.h>

int main(void)
{
    int n,input,i,min=0,max=0;

    printf("Inserisci un numero :");
    scanf("%d",&n);
    for(i = 0; i < n ; i++)
    {
        printf("insersci un numero da controllare : ");
        scanf("%d",&input);
        if(input > max )
        {
            max = input;
        }
        if ( input < min || i == 0)
        {
            min = input;
        }

        printf("max = %d , min = %d\n"  , max , min);
    }



}