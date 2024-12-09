#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Studente
{
    int matricola;
    char *nome;
    char *cognome;
}Studente;

int arraystudent(Studente **s);
void inserStudent(Studente *s);
void freeStudent(Studente *s,int r);
void stampaStudent(Studente *s,int dim);


int main(void)
{
    Studente *stu = malloc(5*sizeof(Studente));
    int i;
    for( i = 0; i < 5 ; i++)
    {
        inserStudent((stu + i));
    }
    return 0;
}

int arraystudent(Studente **s)
{
    int r,i;
    printf("Quanti studenti vuoi aggiungere \n");
    scanf("%d",&r);
    *s = malloc(r * sizeof(Studente));
    if(s == NULL)exit(0);

    for(i = 0 ; i < r ; i++)
    {
        inserStudent(*s + i);
    }

    return (r);
}

void inserStudent(Studente *s)
{

    s->nome = malloc(40*sizeof(char));
    s->cognome= malloc(40*sizeof(char));
    if(s->cognome == NULL || s->nome == NULL)exit(0);
    printf("Inserisci uno stundente \n");
    printf("Matricola :");
    scanf("%d",&s->matricola);
    printf("Nome :");
    scanf("%s",s->nome);
    printf("Cognome :");
    scanf("%s",s->cognome);
}

void freeStudent(Studente *s,int r)
{
    int i;
    for(i = 0; i < r ; i++)
    {
    free((s+i)->cognome);
    free((s+i)->nome);
    }
    free(s);
}

void stampaStudent(Studente *s,int dim)
{
    int i;
    printf("\nStampa uno stundente \n");
    for(i = 0 ; i < dim ; i++)
    {
    printf("Matricola : %d \n",s[i].matricola);
    printf("Nome : %s \n",s[i].nome);
    printf("Cognome : %s \n",s[i].cognome);
    }
}