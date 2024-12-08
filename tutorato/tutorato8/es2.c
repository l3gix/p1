#include <stdio.h>
#include <stdlib.h>

typedef struct Mese
{
    char *nome;
    int giorni;
}Mese;

void inserMese(Mese *m);
void seleziona (struct Mese meseArray[], int l);
void stampa(Mese m);
void dealloca(Mese *m,int l);


int main(void)
{
    Mese *m = calloc(12,sizeof(Mese));
    int n = 3;
    for(int i =0 ; i < n ; i++)
    {
        inserMese(m + i);
    }
    seleziona(m,n);
    dealloca(m , n);
    free(m);
    return 0;
}


void inserMese(Mese *m)
{
    (*m).nome = malloc(16*sizeof(Mese));
    if((*m).nome == NULL )exit(0);
    printf("Nome Mese :");
    scanf("%s",(*m).nome);
    printf("Giorni Mese : ");
    scanf("%d",&((*m).giorni));
}

void stampa(Mese m)
{
    printf("Nome Mese : %s\n",m.nome);
    printf("Giorni Mese :%d \n",m.giorni);
}

void seleziona (struct Mese meseArray[], int l)
{
    int i=0;
    for(; i < l ; i++)
    {
        if(meseArray[i].giorni == 31)stampa(meseArray[i]);
    }

}

void dealloca(Mese *m,int l)
{
    int i;
    for(i = 0; i < l ; i++)
    {
        free(m[i].nome);
    }
}