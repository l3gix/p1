#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Rubrica
{
    char *name;
    char *surname;
    char *phonenumber;
}Rubrica;


int validateInput()
{
    int a;
    do
    {
        printf("Inserisci : ");
        scanf("%d",&a);
        printf("\n");
    } while ((a <= 0)|| (a > 4) );
    
    return a;
}
int scelta()
{
    printf("------------------\n");
    printf("Inserisci \n");
    printf("1)Per stampare la rubrica\n");
    printf("2)Per inserire un nuovo contatto\n");
    printf("3)Per eliminare un contatto\n");
    printf("4)Per uscire\n");
    printf("------------------\n");
    return(validateInput());
}

void allocRubrica(Rubrica **,int dim);
void freeRubrica(Rubrica *,int dim);

int readLineOnFile(FILE *);
void checkFile(FILE *f);
void readFile(FILE *,Rubrica *,int dim);
void writeFile(FILE *,Rubrica *,int dim);

void insertContatto(Rubrica *,int pos,char *name,char *surname,char *phonenumber,int *dim);
void insertNewContatto(Rubrica **,int *dim);
void printRubrica(Rubrica *,int dim);
Rubrica *deleteContatto(Rubrica *,int *dim);


int main(int argc,char *argv[])
{
    int b = 1;
    int dim;
    FILE *f;
    Rubrica *r;

    if(argc != 2)
    {
        printf("Errore Inserimento dei parametri\n");
        exit(0);
    }

    f = fopen(argv[1],"r+");
    checkFile(f);

    dim = readLineOnFile(f);

    allocRubrica(&r,dim);
    readFile(f,r,dim);

    while(b)
    {
            switch (scelta())
            {
            case 1:
                printRubrica(r,dim);
                break;
            case 2:
                insertNewContatto(&r,&dim);
                break;
            case 3:
                printRubrica(r,dim);
                r = deleteContatto(r,&dim);
                break;
            case 4:
                writeFile(f,r,dim);
                freeRubrica(r,dim);
                fclose(f);
                b = 0;
                break;
            }

    }
}


void allocRubrica(Rubrica **r,int dim)
{
    int i;
    *r = malloc(dim * sizeof(Rubrica ));
    if(*r == NULL)exit(0);

    for(i = 0; i < dim ; i++)
    {
        (*r + i)->name = calloc(20,sizeof(char));
        if((*r + i)->name == NULL)exit(0);

        (*r + i)->surname = calloc(20,sizeof(char));
        if((*r + i)->surname == NULL)exit(0);

        (*r + i)->phonenumber = calloc(20,sizeof(char));
        if((*r + i)->phonenumber == NULL)exit(0);
    }
}

void freeRubrica(Rubrica *r,int dim)
{
    int i;
    for(i = 0; i < dim ; i++)
    {
        free(r[i].name);
        free(r[i].surname);
        free(r[i].phonenumber);
    }
}

int readLineOnFile(FILE *f)
{
    char size[100];
    int num = 0;
    while(fgets(size,sizeof(size),f) != NULL)
    {
        num++;
    }

    rewind(f);

    return (num/3);
}

void insertContatto(Rubrica *r,int pos,char *name,char *surname,char *phonenumber,int *dim)
{
    if(pos >= *dim)
    {
        printf("inpossibile inserire \n");
        exit(1);
    }

    strcpy(r[pos].name,name);
    strcpy(r[pos].surname,surname);
    strcpy(r[pos].phonenumber,phonenumber);
}

void insertNewContatto(Rubrica **r,int *dim)
{
    char name[20];
    char surname[20];
    char phonenumber[20];


    printf("Inserisci il nuovo contatto \n");
    printf("Name : ");
    scanf("%s",name);
    
    printf("SurName : ");
    scanf("%s",surname);

    printf("PhoneNumber : ");
    scanf("%s",phonenumber);
    


    (*dim)++;
    int ndim = *dim;
    *r = realloc(*r,(ndim)*sizeof(Rubrica));

    (*r + (ndim - 1))->name = calloc(20,sizeof(char));
    if((*r + (ndim - 1))->name == NULL)exit(0);

    (*r + (ndim - 1))->surname = calloc(20,sizeof(char));
    if((*r + (ndim - 1))->surname == NULL)exit(0);

    (*r + (ndim - 1))->phonenumber = calloc(20,sizeof(char));
    if((*r + (ndim - 1))->phonenumber == NULL)exit(0);

    strcpy((*r)[ndim-1].name,name);
    strcpy((*r)[ndim-1].surname,surname);
    strcpy((*r)[ndim-1].phonenumber,phonenumber);
}

Rubrica *deleteContatto(Rubrica *r,int *dim)
{
    int pos, newdim = *dim,i,olddim = *dim;
    Rubrica *t;

    printf("Inserisci la posizione del contatto da eliminare : ");
    scanf("%d",&pos);
    pos--;
    if(pos < 0 || pos > olddim)
    {
        printf("Indice della posizione incoretto\n");
        return r;
    }
    newdim--;

    allocRubrica(&t,newdim);

    for(i = 0 ; i < olddim ; i++)
    {
        if ( i != pos)
        {
            strcpy(t[i].name,r[i].name);
            strcpy(t[i].surname,r[i].surname);
            strcpy(t[i].phonenumber,r[i].phonenumber);
        }
    }

    freeRubrica(r,olddim);
    (*dim)--;
    return (t);
}

void printRubrica(Rubrica *r,int dim)
{
    int i;
    for(i = 0; i < dim ; i++)
    {
        printf("Numero Contatto %d\n" , i+1 );
        printf("Name : %s\n",r[i].name);
        printf("SurName : %s\n",r[i].surname);
        printf("PhoneNumber : %s\n",r[i].phonenumber);
        printf("-------------------\n");
    }
}

void checkFile(FILE *f)
{
    if(f == NULL )
    {
        exit(2);
    }else printf("file aperto correttamente \n");
}

void readFile(FILE *f,Rubrica *r,int dim)
{
    int i;
    for(i = 0; i < dim ;i++)
    {
        if(fscanf(f,"%s",r[i].name) == EOF)break;
        if(fscanf(f,"%s",r[i].surname) == EOF)break;
        if(fscanf(f,"%s",r[i].phonenumber) == EOF)break;
    }
    rewind(f);
}

void writeFile(FILE *f,Rubrica *r,int dim)
{
    freopen(NULL, "w", f);
    int i;
    for(i = 0; i < dim ; i++)
    {
        fprintf(f,"%s\n",r[i].name);
        fprintf(f,"%s\n",r[i].surname);
        fprintf(f,"%s\n",r[i].phonenumber);
    }
}






