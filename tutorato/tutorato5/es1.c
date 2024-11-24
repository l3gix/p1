#include <stdio.h>

void stampa(int *p,int *q);
void swap(int *p,int *q);

int main(void)
{
    int q = 10 , p = 12;
    int *a = &q, *b = &p;
    printf("prima \n");
    stampa(a,b);
    swap(a,b);
    printf("dopo lo scambio \n");
    stampa(&q,&p);
    return 0;
}

void stampa(int *p, int *q)
{
    printf("Stampa -----\n");
    printf("prima variabile : %d \nindirizo :%p\n",*p,p);
    printf("seconda variabile : %d \nindirizo :%p\n",*q,q);
}

void swap(int *p,int *q)
{

    p = q;
    //stampa(p,q);
    printf("%d and %p\n",*p,p);
    printf("%d and %p\n",*q,q);
    //*p = *q;
    stampa(p,q);
    

}