#include <stdio.h>
#include <math.h>

int validateInput(void);
int checkPrimo(int x);
int concetturaGoldbach(int n);

int main(void)
{
    int bot,top,flag = 1;
    printf("Inserisci l'intervallo superiore and inferiore\n");
    bot = validateInput();
    top = validateInput();
    for(;bot <= top ; bot+= 2)
    {
        if(!concetturaGoldbach(bot))
        {
            flag = 0;
            break;
        }
    }
    //int prova = validateInput();
    //printf("%d",prova);
    if(flag)printf("Concettura verificata\n");
    else printf("Concettura sfatata\n");


}

int validateInput(void)
{
    double numero,vint,vreal;
    do
    {
    printf("Inserisci un numero  >= 0 e pari: ");
    scanf("%lf",&numero);
    vreal = modf(numero,&vint);
    if(numero >= 0 && vreal == 0 && (int)vint % 2 == 0)break;
    }while (1);
    
    return ((int)vint);
}

int checkPrimo(int x)
{
    int i,flag=1;
    for(i = 2 ; i <= sqrt(x) ; i++)
    {
        if(x % i == 0)
        {
            flag=0;
            break;
        }
    }
    return (flag);
}

int concetturaGoldbach(int n)
{
    int x,y,flag=0;
    for(x = 2 ; x <= n/2 ; x++)
    {
        if(checkPrimo(x))
        {
            y = n - x;
            if(checkPrimo(y))
            {
                flag = 1;
                printf("x = %d , y = %d \nNumeri = %d + %d\n",x,y,x,y);
            }
        }
    }

    return (flag);
}