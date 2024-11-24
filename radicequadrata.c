#include<stdio.h>

int main()
{

double errore = 0.0000001;
int i = 0;
double x,n;
scanf("%lf",&n);

x = n / 2;

do
{
    x = (x + n / x) / 2;
    i++;
    //printf("valore di x -----> %lf",x);

}while((x * x - n  ) < - errore || (x * x - n ) > errore);

printf("\nradice quadrata %lf",x);
printf("\nnumero di iterazioni %d\n",i);

}