#include<stdio.h>

int main()
{
    int a,b,r;

    scanf("%d",&a);
    scanf("%d",&b);

    if( a < b )
    {
        int t;
        t = a;
        a = b;
        b = t;

    }

    while ( r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    printf("il risultato = %d\n",a);
}