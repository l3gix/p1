#include <stdio.h>

#define N 3

void leggiMatrice(int (*matrice)[N]);
void calcolaSommaRighe(int (*matrice)[N] , int *sommarighe);
void stampaRisulatato(int (*matrice)[N] , int *sommarighe);


int main(void)
{
    int matrice[N][N];
    int sommarighe[N] = {0};
    leggiMatrice(matrice);
    calcolaSommaRighe(matrice,sommarighe);
    stampaRisulatato(matrice,sommarighe);
    return 0;
}

void leggiMatrice(int (*matrice)[N])
{
    int i = 0,j = 0;
    for (; i < N ; i++)
    {
        printf("Insersisci gli elementi della righe %d \n",i + 1);
        for(j = 0; j < N ; j++)
        {
            printf("Matrice[%d][%d] : ",i+1,j+1);
            scanf("%d",(*(matrice + i) + j));
        }
    }
}

void calcolaSommaRighe(int (*matrice)[N], int *sommarighe)
{
    int i = 0 ,j = 0;
    for (; i < N ; i++)
    {
        for(j = 0; j < N ; j++)
        {
            *(sommarighe + i )+= *(*(matrice + i) + j);
        }
    }
}

void stampaRisulatato(int (*matrice)[N] , int *sommarighe)
{
    int i = 0 ,j = 0;
    printf("Matrice \n");
    for (; i < N ; i++)
    {
        for(j = 0; j < N ; j++)
        {
            printf("%d \t " , *(*(matrice + i) + j));
        }
        printf("\n");
    }

    for(i = 0 ; i < N ; i++)
    {
        printf("Valore righa %d = %d \n" , i+1 , *(sommarighe + i ));
    }
}



