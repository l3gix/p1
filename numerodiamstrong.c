#include<stdio.h>

int check_Armstrong (int number);

int main(void)
{
    int n;
    printf("inserisci un numero : ");
    scanf("%d",&n);
    printf("%d\n",check_Armstrong(n));
    return 0;
}

int check_Armstrong (int number)
{
    int n = number,somma=0,t = 0;
    while( n != 0)
    {
        t = n % 10;
        somma += t*t*t;
        n /= 10;
    }

    if( somma == number)return 1;
    else return 0;
}