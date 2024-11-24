#include<stdio.h>
#define N 5

int *smallest( int a[], int n );
int *second_max( int a[], int n );
int insert(int x[]);

int main(void)
{
    int x[N],*small,*max;
    insert(x);
    small = smallest(x,N);
    max = second_max(x,N);
    printf("piccolo : %d\n" ,*small);
    printf("secondo grande %d\n", *max);
    return 0;
}

int *smallest( int a[], int n )
{
    int *ptr = a,i=1;
    for(; i < n ; i++)
    {
        if(a[i] < *ptr) ptr = &a[i];
    }

    return ptr;

}

int *second_max( int a[], int n )
{
    int *ptr,i=1,max = a[0], diff;
    for(; i < n ; i++)
    {
        if(a[i] > max) max = a[i];
    }
    
    diff = max - a[0];
    for(i = 0; i < n ; i++)
    {
        if(a[i] != max)
        {
            if((max - a[i] ) < diff)ptr = &a[i];
            diff = max - a[i];
        }
    }

    
    return ptr;
}

int insert(int x[])
{
    int i;
    for(i = 0; i < N ; i++)
    {
        printf("v[%d] : ",i);
        scanf("%d",&x[i]);
    }
}