#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct prova
{
    char *nome;
    int eta;
}prova;


int main(void)
{
    prova *prima;
    prova **es = &prima;
    *es = malloc(sizeof(prova));
    (*es)->nome = calloc(20,sizeof(char));

    strcpy((*es)->nome,"giovanni");
    printf("inserisci un eta : ");
    scanf("%d",&(*es)->eta);

    printf("%s \n %d\n",(*es)->nome,(*es)->eta);

    free((*es)->nome);
    free(*es);
    return 0;
}