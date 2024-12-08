#include <stdio.h> 
#include <stdlib.h>

int **allocazione(int r,int c);
void input(int **m,int r,int c);
void stampa(int **m , int r,int c);
void dealloca(int **m,int r);
int **sommamatrici(int **m,int **m2,int r ,int c);



int main(void)
{
    int r = 3 , c = 3;
    int **m1,**m2,**ms;
    m1 = allocazione(r,c);
    m2 = allocazione(r,c);
    printf("Prima matrice\n");
    input(m1,r,c);
    printf("Seconda matrice\n");
    input(m2,r,c);
    printf("Stampo prima matrice\n");
    stampa(m1,r,c);
    printf("Stampo seconda matrice\n");
    stampa(m2,r,c);

    ms = sommamatrici(m1,m2,r,c);
    printf("Matrice somma \n");
    stampa(ms,r,c);

    dealloca(m1,r);
    dealloca(m2,r);
    dealloca(ms,r);

    return 0;
}


int **allocazione(int r,int c)
{
    int **m;
    int i;
    m = calloc(r,sizeof(int *));
    if(m == NULL ) exit(0);
    for(i = 0; i < r ; i++)
    {
        *(m +i)= calloc(c,sizeof(int));
        if(*(m+i) == NULL ) 
        {
            free(m);
            exit(0);
        }
    }

    return (m);
}

void input(int **m,int r,int c)
{
    int i,j;
    for( i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            printf("m[%d][%d] : " , i,j);
            scanf("%d",(*(m+i)+j));
        }

    }
}

void stampa(int **m , int r,int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            printf("%d \t",*(*(m+i) + j));
        }
        printf("\n");
    }
}

void dealloca(int **m,int r)
{
    int i;
    for(i = 0; i < r ; i++)
    {
        free(*(m+i));
    }
    free(m);
}

int **sommamatrici(int **m,int **m2,int r ,int c)
{
    int **ms;
    int i,j;
    ms = calloc(r,sizeof(int *));

    if(ms == NULL )exit(0);

    for(i = 0; i < r ; i++)
    {
        *(ms+i) = calloc(c,sizeof(int));
        if(*(ms+i) == NULL) 
        {
            free(m);
            exit(0);
        }
    }

    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            *(*(ms+i)+j) = *(*(m+i)+j) + *(*(m2+i)+j);
        }
    }

    return ms;
}