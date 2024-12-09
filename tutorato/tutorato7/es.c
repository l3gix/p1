#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **allocazione(int r,int c);
char **input(int r ,int c);
void stampa(char **s,int r);
void dealloc(char **s,int r);

int main(void)
{
    int r = 3,c = 40;
    char **m = input(r,c);
    stampa(m,r);
    return 0;
}

char **allocazione(int r,int c)
{
    int i;
    char **s =(char**)malloc(r*sizeof(char*));
    if(s == NULL )
    {
        exit(0);
    }
    for(i = 0; i < r ; i++)
    {
        *(s + i) = (char *)malloc(c*sizeof(char));
        if(s[i] == NULL)
        {
            exit(0);
            free(s);
        }
    }

    return (s);
}

char **input(int r ,int c)
{
    int i;
    char **s = allocazione(r,c);
    if(s == NULL )exit(0);
    for(int i = 0; i < r ; i++)
    {
        printf("Inserisci una stringa max %d : ",c - 1);
        scanf("%s",*(s+i));
    }

    return (s);
}

void stampa(char **s,int r)
{
    int i;
    printf("Elenco :\n");
    for(i = 0; i < r; i++)
    {
        printf("%s\n",*(s+i));
    }
}


void dealloc(char **s,int r)
{
    int i =0;
    for(; i < r; i++)
    {
        free(*(s+i));
    }
    free(s);
}
