#include<stdlib.h>
#include<stdio.h>

#define ROW 3
#define COL 3

int checkInput(int a);
void checkFile(FILE *f);
void readMatrix(FILE *f,int matrix[][COL]);
void traslateMatrix(int matrix[][COL]);
void printMatrix(int matrix[][COL]);
void writeMatrix(FILE *f,int matrix[][COL]);


int main(int argc,char *argv[])
{
    FILE *f1,*f2;
    int matrix[ROW][COL];
    checkInput(argc);
    f1 = fopen(argv[1],"r");
    checkFile(f1);
    f2 = fopen("matrixoutput.txt","w");
    checkFile(f2);
    readMatrix(f1,matrix);
    traslateMatrix(matrix);
    printMatrix(matrix);
    writeMatrix(f2,matrix);

    fclose(f1);
    fclose(f2);


    return 0;
}

int checkInput(int a)
{
    if(a != 2) 
    {
        printf("parametri inseriti in maniera errata \n");
        return 0;
    }else return 1;
}

void checkFile(FILE *f)
{
    if ( f == NULL )
    {
        printf("Errore nel file \n");
        exit(0);
    }
}

void readMatrix(FILE *f,int matrix[][COL])
{
    int i,j,t;
    for(i = 0; i < ROW ; i++)
    {
        for (j = 0; j < COL ; j++)
        {
            if(fscanf(f,"%d",&t) != EOF)matrix[i][j] = t;
        }
    }

}

void traslateMatrix(int matrix[][COL])
{
    int i,j,t;
    for(i = 0; i < ROW ; i++)
    {
        for (j = i + 1; j < COL ; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

void printMatrix(int matrix[][COL])
{
    int i,j;
    for(i = 0; i < ROW ; i++)
    {
        for (j = 0; j < COL ; j++)
        {
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
    }
}

void writeMatrix(FILE *f,int matrix[][COL])
{
    int i,j;
    for(i = 0; i < ROW ; i++)
    {
        for (j = 0; j < COL ; j++)
        {
            fprintf(f,"%d \t",matrix[i][j]);
        }
        fprintf(f,"\n");
    }
}