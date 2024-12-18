#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
typedef struct Libro
{
    char titolo[MAX];
    char autore[MAX];
    float prezzo;
    int anno;
}Libro;

int contaLibri(FILE *file)
{
    int numerolibri = 0;
    char linea[MAX];

    while(fgets(linea,sizeof(linea),file) != NULL)
    {
        numerolibri++;
    }

    rewind(file);

    return (numerolibri/4);
}

void leggiLibri(FILE *file,struct Libro *libro,int numerolibri)
{
    int i;
    for(i = 0; i < numerolibri ; i++)
    {
        fgets(libro[i].titolo,sizeof(libro[i].titolo),file);
        fgets(libro[i].autore,sizeof(libro[i].autore),file);
        fscanf(file,"%f",&libro[i].prezzo);
        fscanf(file,"%d",&libro[i].anno);

        fgetc(file);
    }
}

void stampaLibri(struct Libro *libro , int nunlibri)
{
    int i;
    for(i = 0; i < nunlibri ; i++)
    {
        printf("Libro %d\n",i+1);
        printf("Titolo :%sAutore :%sPrezzo :%.2f\nAnno :%d\n",libro[i].titolo,libro[i].autore,libro[i].prezzo,libro[i].anno);
    }
}

int main(void)
{
    FILE *file;
    Libro *libri = NULL;
    int numLibri;

    file = fopen("libri.txt","r");
    if(file == NULL)
    {
        printf("Errore apertura del file");
        exit(EXIT_FAILURE);
    }

    numLibri = contaLibri(file);
    libri = (Libro *)malloc(numLibri*sizeof(Libro));
    if(libri == NULL)
    {
        printf("Errore apertura del file");
        exit(EXIT_FAILURE);
    }

    leggiLibri(file,libri,numLibri);
    fclose(file);
    stampaLibri(libri,numLibri);
    free(libri);

    return 0;
}