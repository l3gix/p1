#include <stdio.h>
#include <string.h>

#define N 20

char max_word[N];
int dim_max = 0;

void conta_parola(int *n);
int fine_stringa(char s[],char *s1);
void max_parola(char lette[]);
void stampa();

int main(void)
{
    int conta = 0;
    conta_parola(&conta);
    stampa();
    return 0;
}

void conta_parola(int *n)
{
    char word[N],*end = "xyz";
    printf("Inserisci una frase (xyz per terminare) \n");
    do
    {
        scanf("%s",word);
        if(!fine_stringa(word,end))break;
        max_parola(word);
        (*n)++;
    }while(1);
}
int fine_stringa(char s[],char *s1)
{
    return (strcmp(s,s1));
}
void max_parola(char lette[])
{
    int dim_tmp;
    dim_tmp = strlen(lette);
    if(dim_tmp > dim_max)
    {
        dim_max = dim_tmp;
        strcpy(max_word,lette);
    }
}

void stampa()
{
    printf("massima parola = %s\n",max_word);
    printf("Numero massimo di caratteri della max parola = %d \n",dim_max);
}
