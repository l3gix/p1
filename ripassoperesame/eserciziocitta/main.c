#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//funzioni
void allocMatrix(char ***s,int dim);
void freeMatrix(char **s,int dim);
int counterCity(FILE *f);
void readCity(FILE *f,char **s,int dim);
int searchCity(char **s,char *serch,int dim);
void printCity(char **s,int dim);
void checkFile(FILE *f);
void checkArg(int a);



int main(int argc,char *argv[])
{
    checkArg(argc);
    FILE *f;
    int dim,indice;
    char **city;

    f = fopen(argv[1],"r");
    checkFile(f);

    dim = counterCity(f);
    allocMatrix(&city,dim);
    readCity(f,city,dim);
    printCity(city,dim);
    indice = searchCity(city,"Roma",dim);
    
    if(indice == -1 )printf("Nessuna citta trovata\n");
    else printf("City trovata alla indice : %d \nNome citta : %s\n",indice,city[indice]);

    freeMatrix(city,dim);
    fclose(f);

    return 0;
}

void allocMatrix(char ***s,int dim)
{
    int i;
    *s = malloc(dim*sizeof(char *));
    if(*s == NULL)exit(0);

    for(i = 0; i < dim ; i++)
    {
        *(*s + i) = calloc(20,sizeof(char));
        if(*(*s + i) == NULL)exit(0);
    }
}


void freeMatrix(char **s,int dim)
{
    int i;
    for(i = 0; i < dim ; i++)
    {
        free(s[i]);
    }

    free(s);
}

int counterCity(FILE *f)
{
    int num = 0;
    char size[100];
    while (fgets(size,sizeof(size),f) != NULL)
    {
        num++;
    }

    rewind(f);
    return(num);
}

void readCity(FILE *f,char **s,int dim)
{
    int i;
    for(i = 0; i < dim ; i++)
    {
        fscanf(f,"%s",s[i]);
    }
}

int searchCity(char **s,char *serch,int dim)
{
    int i = 0; 
    for(; i < dim ;i++)
    {
        if(!strcmp(s[i],serch)) return (i);
    }

    return (-1);
}

void printCity(char **s,int dim)
{
    int i;
    for(i = 0; i < dim ; i++)printf("%d : %s\n",i,s[i]);

}

void checkFile(FILE *f)
{
    if(f == NULL)
    {
        printf("Il file non è aperto in maniera coretta\n");
        exit(2);
    }
}

void checkArg(int a)
{
    if( a != 2)
    {
        printf("Argomet inseriti in maniera errata \n");
        exit(3);
    }
}

