#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,i,flag = 0;
    printf("Inserisci un numero : ");
    scanf("%d",&n);

    if(n == 2)flag = 1;
    else if(n % 2 )
    {
        for(i = 3 ; i < sqrt(n) ; i+= 2) 
        {
            if( n % i == 0 )
            {
                flag = 1;
                break;
            }
        }
    }else flag = 1; 

    if(flag) printf("Il numero non è primo\n");
    else printf("Il numero e' primo\n");

    return 0;
}