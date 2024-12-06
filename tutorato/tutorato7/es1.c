#include<stdio.h>
#include<stdlib.h>


float ** malloc2d(int r, int c);

void freemalloc2d(float **m,int r , int c);

void stampa(float **m,int r , int c);

int main(void)
{
    float **M;
    int r = 3,c = 3;

    M = malloc2d(r, c);

    stampa(M,r,c);

    freemalloc2d(M,r,c);

    return 0;
    
}

float ** malloc2d(int r, int c)
{
    int i,j;
    float **m;

    m = malloc(r * sizeof(float*));

    if(m == NULL ) exit(0);

    for(i = 0; i < r ; i++)
    {
        *(m+i) = malloc(c*sizeof(float));
        if(*(m+i) == NULL) exit(0);
    }

    for(i = 0; i < r ; i++)
    {
        for( j = 0; j < c ; j++ )
        {
            (*(*(m+i)+j) )= 0;
        }
    }

    return m;
}

void freemalloc2d(float **m,int r , int c)
{
    int i;
    for(i = 0; i < r ; i++)
    {
        free(*(m+i));
    }
    free(m);

}

void stampa(float **m,int r , int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        for( j = 0; j < c ; j++ )
        {
            printf("%lf \t", *(*(m+i)+j));
        }
        printf("\n");
    }
}