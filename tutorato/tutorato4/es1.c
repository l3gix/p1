/*
input_array che legge da tastiera un vettore di interi
stampa_array che stampa su video un vettore di interi

max restituisce il valore massimo presente nell’array
min restituisce il valore minimo presente nell’array

cerca_array restituisce l’indice se n è presente nell’array (altrimenti -1).  

*/

#include <stdio.h>

#define N 10

void input_array(int []);
void stampa_array(int []);
int max(int []);
int min(int []);
int cercaArray(int [],int );

int main(void)
{
    int v[N],n;
    printf("Inserisci i numeri nell Array \n");
    input_array(v);
    printf("Valori inseriti nell array \n");
    stampa_array(v);
    printf("Massimo valore nelle array : %d\nMinimo valore nell array : %d\n",max(v),min(v));
    printf("Insersci un valore da cercare nell' array (-1 nel caso non ci fosse) : ");
    scanf("%d",&n);
    printf("Il tuo valore e' nella posizione : %d\n",cercaArray(v,n));
    return 0;
}

void input_array(int v[])
{
    int i;
    for(i = 0; i < N ; i++)
    {
        printf("v[%d] : ",i);
        scanf("%d",&v[i]);
    }
}

void stampa_array(int v[])
{
    int i;
    printf("Array : ");
    for(i = 0; i < N ; i++)
    {
        printf("%d \t", v[i]);
    }
    printf("\n");
}

int max(int v[])
{
    int i,max = v[0];
    for(i = 1 ; i < N ; i++)
    {
        if(v[i] > max) max = v[i];
    }

    return max;
}

int min(int v[])
{
    int i,min = v[0];
    for(i = 1 ; i < N ; i++)
    {
        if(v[i] < min)min = v[i];
    }

    return min;
}

int cercaArray(int v[],int n)
{
    int i,flag=-1;
    for(i = 0; i < N ; i++)
    {
        if(v[i] == n)flag = i;
    }

    return flag;
}   
