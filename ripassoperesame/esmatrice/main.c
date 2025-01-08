#include<stdio.h>
#include<stdlib.h>

#define row 3
#define col 2

void allocMatrix(int ***m);
void insertMatrix(int **m);
int **traslateMatrix(int **m);
void freeMatrix(int **m,int dim);
void printMatrix(int **m,int r,int c);

int main(void)
{
    int **m;
    allocMatrix(&m);
    insertMatrix(m);
    printMatrix(m,row,col);
    m = traslateMatrix(m);
    printMatrix(m,col,row);

    freeMatrix(m,col);
    return 0;
}

void allocMatrix(int ***m)
{
    *m = calloc(row , sizeof(int *));
    if(*m == NULL)exit(0);
    int i;
    for(i = 0 ;i < row ; i++)
    {
        *(*m + i) = calloc(col,sizeof(int));
        if(*(*m + i) == NULL) exit(0);
    }
}

void freeMatrix(int **m,int dim)
{
    int i;
    for(i = 0 ;i < dim ; i++)
    {
        free(m[i]);
    }

    free(m);
}

void insertMatrix(int **m)
{
    int i,j;
    for(i = 0; i < row ; i++)
    {
        for(j = 0; j < col ; j++)
        {
            printf("[%d][%d] :",i,j);
            scanf("%d",(*(m + i) + j));
        }
    }
}

int **traslateMatrix(int **m)
{
    int **t = calloc(col , sizeof(int *));
    if(t == NULL)exit(0);
    int i,j;
    for(i = 0; i < col ; i++)
    {
        *(t + i ) = calloc(row , sizeof(int));
        if(*(t + i ) == NULL)exit(0);
    }

    for(i = 0; i < row ; i ++ )
    {
        for(j = 0; j < col ; j++ )
        {
            t[j][i] = m[i][j];
        }
    }

    freeMatrix(m,row);

    return t;
}

void printMatrix(int **m,int r,int c)
{
    int i,j;
    for(i = 0; i < r ; i++)
    {
        for(j = 0; j < c ; j++)
        {
            printf("%d \t",m[i][j]);
        }
        printf("\n");
    }
}