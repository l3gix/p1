#include <stdio.h>
#include <string.h>

void processaStringa(char *,char *);

int main(void)
{
    char o[100] = "ciao",i[100];
    printf("Inserisci una stringa : ");
    //fgets(o,sizeof(0),stdin);
    processaStringa(o,i);
    printf("Originale : %s \n Inverita : %s \n",o,i);
    return 0;
}

void processaStringa(char *originale,char *invertita)
{
    char *star = originale;
    char *end = originale + strlen(originale) - 1;
    char c;

    strcpy(invertita,originale);

    while (*star < *end)
    {
        c = *star;
        *star = *end;
        *end = c;
        
        star++;
        end--;
    }

}