#include <stdio.h>
#include <string.h>

#define N 20

void leggiNomi(char *nomi[],int numnomi);
void ordinaNomi(char *nomi[],int numnomi);
void stampaNomi(char *nomi[],int numnomi);
void cercaNomi(char *nomi[],int numnomi,const char *nomeDaCercare);

int main(void)
{
    return 0;
}

void leggiNomi(char *nomi[],int numnomi)
{
    scanf("Inserisci un nome");
    for(int i = 0; i < numnomi ; i++)
    {
        scanf("%s",nomi + i );
    }
}




