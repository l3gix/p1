#include<stdio.h>

#define NMAX 10
int main(void)
{
    int a[NMAX]={10,30,25,4},i,pos,n=4;

    for(i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nInserisci posizione e indice del nuovo elemento \n");
    scanf("%d",&pos);

    for(i = pos ; i < n-1 ; i++)
    {
        a[i] = a[i+1];
    }
    n--;

    for(i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}