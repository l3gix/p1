#include <stdio.h>
#include <stdlib.h>

typedef struct Impiegato
{
    char *nome;
    char *cognome;
    float stipendio;
}Impiegato;

void raddoppiaStipendio(Impiegato *i);
void insertImpiegato(Impiegato *i);
void stampaImpiegato(Impiegato i);


int main(void)
{
    Impiegato i;
    i.nome = malloc(50 * sizeof(char));
    i.cognome = malloc(50 * sizeof(char));

    if(i.nome == NULL)exit(0);
    if(i.cognome == NULL)exit(0);


    insertImpiegato(&i);
    stampaImpiegato(i);
    raddoppiaStipendio(&i);
    stampaImpiegato(i);

    free(i.nome);
    free(i.cognome);
    return 0;
}

void raddoppiaStipendio(Impiegato *i)
{
    (*i).stipendio *= 2;
    printf("nuovo stidendio %lf\n",(*i).stipendio);
}
void insertImpiegato(Impiegato *i)
{
    printf("Nome : ");
    scanf("%s",(*i).nome);
    printf("Cognome :");
    scanf("%s",(*i).cognome);
    printf("Stipendio : ");
    scanf("%f",&((*i).stipendio));

}

void stampaImpiegato(Impiegato i)
{
    printf("Nome : %s\nCognome :%s \nStipendio : %lf\n",i.nome,i.cognome,i.stipendio);
}