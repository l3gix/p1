#include<stdio.h> 

int main(void)
{
    int l1,l2,l3;

    printf("inserisci i tre lati \n");

    scanf("%d %d %d",&l1,&l2,&l3);

    if( l1 == l2 && l2 == l3 && l1 == l3) printf("equilatero\n");
    else if ( l1 == l2 || l2 == l3 || l1 == l3) printf("isoscele\n");
    else printf("scaleno\n");

    return 0;
}