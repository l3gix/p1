#include <stdio.h>

#define N 10

int main(void)
{
    int v[N]={1,2,3,4,5,6,7,8,0,9};
    int *pmax = &v[0],*pmin = &v[0],i=1;
    printf("Array : ");
    int j = 0;
    
    do
    {
        printf("%d \t ", v[j]);
    }while(++j < N);
    
    while ( i < N )
    {
        if(v[i] > *pmax) *pmax = v[i];

        if(v[i] < *pmin ) *pmin = v[i];

        i++;
    }

    printf("\nIl valore massimo = %d \nIl suo indirizzo = %p\n",*pmax,pmax);
    printf("Il valore minimo = %d \nIl suo indirizzo = %p\n",*pmin,pmin);
    return 0;
}