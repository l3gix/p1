#include <stdio.h>
#include <stdlib.h>


int **allocazione(int r,int c);
void input(int **m,int r, int c);
void stampa(int **m,int r,int c);
void distruttore(int **m,int r,int c);
int **trasposta(int **m,int r,int c);

int main(void)
{
    int **m;
    int r = 3, c = 3;
    m = allocazione(r,c);
    input(m,r,c);
    printf("Matrice :\n");
    stampa(m,r,c);
    m = trasposta(m,r,c);
    printf("Matrice trasposta :\n");
    stampa(m,r,c);
    distruttore(m,r,c);

    return 0;
}

int **allocazione(int r,int c)
{
    int **m;
    int i;
    m = calloc(r,sizeof(int *));
    if( m == NULL ) exit(0);
    for(i = 0 ; i < r ; i++)
    {
        m[i] = calloc(c,sizeof(int));
        if(m[i] == NULL)
        {
            free(m);
            exit(0);
        }
    }

    return m;

}


void input(int **m,int r, int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            printf("m[%d][%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void distruttore(int **m,int r,int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        free(m[i]);
    }
    free(m);
}

void stampa(int **m,int r,int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            printf("%d \t",m[i][j]);
        }
        printf("\n");
    }
}




int **trasposta(int **m,int r,int c)
{
    int i,j;
    int **ma = calloc(c,sizeof(int *));
    if(ma == NULL )exit(0);

    for(i = 0; i < c ; i++)
    {
        ma[i] = calloc(r,sizeof(int ));
        if(ma[i] == NULL ) 
        {
            free(ma);
            exit(0);
        }
    }


    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            ma[j][i] =  m[i][j];
        }
    }

    distruttore(m,r,c);
    return (ma);
}