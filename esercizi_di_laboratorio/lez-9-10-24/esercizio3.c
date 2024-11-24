#include <stdio.h>

int main(void)
{
    int a;
    float b;
    const int c = 7;

    printf("inserisci il primo numero : ");
    scanf("%d",&a);
    printf("inserisci il secondo numero : ");
    scanf("%f",&b);

    printf("Il valore di a e' %d e il valore di b e' %f \n",a,b);

    printf("Il risulatoto float della divisione di a / b = %f\n", a / b);
    printf("Il risulatoto intera della divisione di a / b = %d\n", a / (int)b);
    printf("Il risulatoto float della divisione di a / c = %f\n", (float) a / c);
    


    return 0;
}