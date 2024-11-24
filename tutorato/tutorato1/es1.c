#include<stdio.h> 

int main(void)
{
    int v; 
    const unsigned short int max = 100;
    printf("inserisci la velocita\' attuale ");
    scanf("%d",&v);
    if( v <= 0 )
    {
        printf("stai fermo \n");
    }else if( v > max) 
    {
        printf("hai superato la velocita\' massima\n");
    }else printf("stai rispettando la velocita\'\n");

    return 0; 
}