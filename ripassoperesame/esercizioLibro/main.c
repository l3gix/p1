#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book
{
    char *autore;
    char *titolo;
    int anno;
}Book;

#define MAX 5

void allocBook(Book **,int);
void freeBook(Book *,int);

int insertBook(Book *,int pos,char *,char *,int);
void readBook(Book *, int);

void writeOnFile(Book *, FILE *f,int dim);
int counterBook(FILE *f);
void readOnFile(FILE *f,Book *,int);
void checkFile(FILE *f,int a);


int main(int argc,char *argv[])
{
    FILE *f1;
    Book *book = NULL;
    int max_dim = 5;
    int dim;


    f1 = fopen(argv[1],"r+");

    checkFile(f1,argc);

    dim = counterBook(f1);

    allocBook(&book,MAX);

    readOnFile(f1,book,dim);

    //insertBook(book,0,"Dante_Alighieri","DivinaCommedia",1400);
    //insertBook(book,1,"Giovanni_Boccacio","Decameron",1500);


    dim += insertBook(book,2,"Ugo_Foscolo","Seporchri",1600);

    writeOnFile(book,f1,dim);

    readBook(book, dim);

    freeBook(book,dim);

    fclose(f1);

    return 0;
}

void checkFile(FILE *f,int a)
{
    if(a != 2)exit(2);
    if(f == NULL)exit(1);
    else 
    {
        printf("File aperto corettamente\n");
    }
}

void allocBook(Book **b,int dim)
{
    int i;
    *b = malloc(dim * sizeof(Book ));
    if(*b == NULL)
    {
        printf("error");
        exit(0);
    }
    for(i = 0; i < dim ; i++)
    {
        (*b + i)->autore = calloc(20,sizeof(char));
        if((*b + i)->autore == NULL)exit(0);

        (*b + i)->titolo = calloc(20,sizeof(char));
        if((*b + i)->titolo == NULL)exit(0);

        (*b + i)->anno  = 0;
    }
}

void freeBook(Book *b,int dim)
{
    int i;
    for(i = 0;i < dim ; i++)
    {
        free(b[i].autore);
        free(b[i].titolo);
    }

    free(b);
}

int insertBook(Book *b,int pos,char *autore,char *titolo,int anno)
{
    if(pos >= MAX)
    {
        printf("Superato il limite \n");
        exit(0);
    }
    if(strcmp(b[pos].autore,autore) == 0 )printf("Autore Gia inserito");
    else strcpy(b[pos].autore,autore);

    if(strcmp(b[pos].titolo,titolo) == 0 )printf("Titolo Gia inserito");
    else strcpy(b[pos].titolo,titolo);

    if(b[pos].anno == anno)printf("Anno Gia inserito");
    else b[pos].anno = anno;


    return(1);

}

void readBook(Book *b, int dim)
{
    int i;
    for(i = 0; i < dim ; i++)
    {
        printf("NumLinbro %d\n",i+1);
        printf("Autore : %s\n",b[i].autore);
        printf("titolo : %s\n",b[i].titolo);
        printf("Anno : %d\n",b[i].anno);
        printf("-------------\n");
    }

}

void readOnFile(FILE *f,Book *b,int dim)
{
    int i = 0;
    for(;i < dim ; i++)
    {
        if(fscanf(f,"%s",b[i].autore) == EOF) break;
        if(fscanf(f,"%s",b[i].titolo) == EOF) break;
        if(fscanf(f,"%d",&b[i].anno) == EOF) break;
    }

    rewind(f);
}

int counterBook(FILE *f)
{
    int num = 0;
    char line[100];

    while(fgets(line,sizeof(line),f) != NULL)
    {
        num++;
    }

    rewind(f);
    return(num / 3);
}

void writeOnFile(Book *b, FILE *f,int dim)
{
    freopen(NULL, "w", f);
    int i = 0;
    for(; i < dim ; i++)
    {
        fprintf(f,"%s\n",b[i].autore);
        fprintf(f,"%s\n",b[i].titolo);
        fprintf(f,"%d\n",b[i].anno);
    }
}