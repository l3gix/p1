#include <stdio.h>

int main(void)
{
    int nodi;
    printf("inserisci la velocita' del vento (nodi) : ");
    scanf("%d",&nodi);

    if( nodi < 1 ) printf("Calmo \n");
    else if(nodi >= 1 && nodi <= 3) printf("Bava di vento\n");
    else if(nodi >= 4 && nodi <= 27) printf("Brezza \n");
    else if(nodi >= 28 && nodi <= 47) printf("Burrasca \n");
    else if(nodi >= 48 && nodi <= 63) printf("Tempesta \n");
    else printf("Uragano \n");


}