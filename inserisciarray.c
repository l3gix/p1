#include<stdio.h>

#define NMAX 10
int main(void)
{
    int a[NMAX]={10,30,25,4},i,elm,pos,n=4;

    for(i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nInserisci posizione e indice del nuovo elemento \n");
    scanf("%d",&pos);
    scanf("%d",&elm);

    for(i = n ; i > pos ; i--)
    {
        a[i] = a[i-1];
    }
    n++;
    a[pos] = elm;

    for(i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}