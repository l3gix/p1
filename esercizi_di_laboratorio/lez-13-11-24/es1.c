#include <stdio.h>

int mcd(int , int);

int main(void)
{
    int a,b;
    printf("Inserisci due numeri : \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("mcd = %d\n",mcd(a,b));
    return 0;
}


int mcd(int x , int y)
{
    int max,r = -1;
    if(x > y) max = x;
    else max = y;

    for(; max > 0 ; max--)
    {
        if(y % max == 0 && x % max == 0) 
        {
            r = max;
            break;
        }
    }

    return (r);

}