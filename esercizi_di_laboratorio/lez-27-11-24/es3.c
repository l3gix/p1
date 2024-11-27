#include <stdio.h>
#include <string.h>

#define N 3

void leggiNomi(char  *nomi[],int numnomi);
void ordinaNomi( char  *nomi[],int numnomi);
void stampaNomi(char  *nomi[],int numnomi);
int cercaNomi(char  *nomi[],int numnomi,const char *nomeDaCercare);

int main(void)
{
    char *punta_nomi[N]; // array di puntatore a carattere 
    char nomi[N][20];
    char nomedacercare[20];
    int i,flag;
    for( i = 0; i < N ; i++)
    {
        punta_nomi[i] = nomi[i];
    }

    leggiNomi(punta_nomi,N);
    stampaNomi(punta_nomi,N);
    printf("\nNomi ordinati \n");
    ordinaNomi(punta_nomi,N);
    stampaNomi(punta_nomi,N);
    printf("\nInserisci un nome da cercare :");
    scanf("%s",nomedacercare);
    flag = cercaNomi(punta_nomi,N,nomedacercare);
    if(flag != -1) printf("Nome trovato nella posizione : %d\n" , flag);
    else printf("Nome non trovato\n");
    return 0;
}

void leggiNomi(char *nomi[],int numnomi)
{
    int i;
    printf("Inserisci i nomi max 19 char \n");
    for(i = 0; i < numnomi ; i++)
    {
        printf("nome %d: ", i + 1);
        scanf("%s",nomi[i]);
    }
}


void ordinaNomi(char *nomi[],int numnomi)
{
    char *t;
    int i,j;
    /*
    for(i = 0; i < numnomi - 1; i++)
    {
        for(j = 0 ; j < numnomi -1  ; j++)
        {
            if(strcmp(nomi[j],nomi[j+1]) > 0)
            {
                t = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = t;
            }   
        }
    }
    */
    for(i = 0 ; i < numnomi - 1 ; i++)
    {
        for(j = i + 1 ; j < numnomi ; j++)
        {
            if(strcmp(nomi[i],nomi[j]) > 0)
            {
                t = nomi[i];
                nomi[i] = nomi[j];
                nomi[j] = t;
            }
        }
    }
}

void stampaNomi(char *nomi[],int numnomi)
{
    int i;
    printf("Elenco Nomi : \n");
    for(i = 0; i < numnomi ; i++)
    {
        printf("%d : %s \n",i + 1,nomi[i]);
    }
}

int cercaNomi(char  *nomi[],int numnomi,const char *nomeDaCercare)
{
    int i,flag = -1;
    for(i = 0; i < numnomi ; i++)
    {
        if(strcmp(nomi[i],nomeDaCercare) == 0)
        {
            flag = i;
        }
    }
    return flag;
}



