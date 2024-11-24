#include <stdio.h>

int main(void)
{
    int n,i = 10,cont = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while ( n / i != 0)
    {
        cont++;
        i*=10;
    }

    printf("the number %d has %d digits\n",n,cont);
}