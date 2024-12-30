#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3


int controllo_input(int a);
void controllo_file(FILE *file,char *stringa);
int leggi(FILE *f,int **m);
int writeinfile(FILE *f,int **m);
void alloc(int ***m);
void dealloc(int **m);
void stampa(int **m);


int main(int argc,char *argv[])
{
    FILE *f1,*f2;
    int **m;
    controllo_input(argc);
    f1 = fopen(argv[1],"r");
    f2 = fopen("fine.txt","w");
    controllo_file(f1,argv[1]);
    controllo_file(f2,"fine");

    alloc(&m);
    leggi(f1,m);
    stampa(m);
    writeinfile(f2,m);
    fclose(f1);
    fclose(f2);

    free(m);
    return 0;
}

int leggi(FILE *f,int **m)
{
    int c;
    int i,j;
    for(i = 0; i < ROW ; i++)
    {
        for(j = 0; j < COL ; j++)
        {
            if(fscanf(f,"%d",&c) != EOF)
            {
                m[i][j] = c;
            }
        }
    }
    return 1;
}

int writeinfile(FILE *f,int **m)
{
    int i,j;
    for(i = 0; i < ROW ; i++)
    {
        for(j = 0; j < COL ; j++)
        {
            fprintf(f,"%d \t",m[i][j]);
        }
        fprintf(f,"\n");
    }
    return 1;
}

void stampa(int **m)
{
    int i,j;
    for(i = 0; i < ROW ; i++)
    {
        for(j = 0 ; j < COL ; j++)
        {
            printf("%d \t",*(*(m+i) + j));
        } 
    printf("\n");
    }
}

int controllo_input(int a)
{
    if( a != 2)
    {
        printf("il programma apre un file\n");
        exit(1);
    }
    else return 1;
}

void controllo_file(FILE *file,char *stringa)
{
    if(file != NULL)
    {
        printf("%s e stato aperto corettamente\n",stringa);
    }else exit(2);
}

void alloc(int ***m)
{
    int i;
    *m = calloc(ROW,sizeof(int *));
    if(*m == NULL)exit(0);
    for(i = 0; i < ROW ; i++)
    {
        (*m)[i] = calloc(COL,sizeof(int));
        if((*m)[i] == NULL)exit(0);
    }
}

void dealloc(int **m)
{
    int i = 0;
    for(; i < ROW ; i++)
    {
        free(m[i]);
    }

    free(m);
}