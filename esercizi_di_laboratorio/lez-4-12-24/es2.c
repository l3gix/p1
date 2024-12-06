#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Studente
{
    char **nc;
    char **esame;
    int num_esame;
}Studente;

void aggiungiStudente(Studente *,int);


int main(void)
{

    return 0;
}

void aggiungiStudente(Studente *s,int pos)
{
    s[pos].nc = malloc(sizeof(char *) * 2);
    s[pos].nc[0] = malloc(sizeof(char ) * 20);
    s[pos].nc[1] = malloc(sizeof(char ) * 20);
    s[pos].esame = malloc(sizeof(char *) * 30);
    s[pos].num_esame = 0;

    printf("Nome :");
    scanf("%s",s[pos].nc[0]);
    printf("Cognome : ");
    scanf("%s",s[pos].nc[1]);
    return;


}