#include <stdio.h>

#define N 5

void input_array(int []);
void stampa_array(int []);
void revers(int []);

int main(void)
{
    int v[N];
    printf("Inserisci i numeri nell Array \n");
    input_array(v);
    printf("Valori inseriti nell array \n");
    stampa_array(v);
    printf("Revers Array\n");
    revers(v);
    stampa_array(v);
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

void revers(int v[])
{
    int i,temp,dim = N;
    for(i = 1 ; i <= dim/2 ; i++)
    {
        temp = v[i-1];
        v[i-1] = v[dim-i];
        v[dim-i] = temp;
    }
}
