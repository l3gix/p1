#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    int **dp = &p;
    int *vect;
    int *c;

    printf("Valore a = %d\n" , a);
    printf("Valore a tramite *p = %d \nindirizzo di p = %p\n",*p,p );
    printf("Valore a tramite **dp = %d \n indirizzo di p tramite *dp = %p \n idirizzo di dp = %p\n",**dp,*dp,dp);

    vect = calloc(10,sizeof(int));
    c = malloc(3);

    for(int i = 0; i < 10 ; i++)
    {
        scanf("%d", vect + i);
    }

    for(int i = 0; i < 3 ; i++)
    {
        scanf("%d", c + i);
    }
    
    printf("Vect\n");
    for(int i = 0; i < 10 ; i++)
    {
        printf("%d \n" , *(vect + i));
    }

    printf("c\n");
    for(int i = 0; i < 3 ; i++)
    {
        printf("%d \n" , *(c + i));
    }


    

    free(vect);
    free(c);
    return 0;
}