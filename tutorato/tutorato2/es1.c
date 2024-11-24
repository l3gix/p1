#include<stdio.h>

int main(void)
{
    double operando1,operando2;
    char operatore;
    
    printf("inserisci il primo operando: ");
    scanf("%lf",&operando1);
    printf("inserisci il secondo operando: ");
    scanf("%lf",&operando2);
    printf("inserisci l\'operatore: ");
    scanf(" %c",&operatore);

    switch (operatore)
    {
    case '+':
    printf("somma = %lf\n",operando1 + operando2);
        break;
    
    case '-':
    printf("sottrazione = %lf\n",operando1 - operando2);
        break;
    
    case '*':
    printf("moltiplicazione = %lf\n",operando1 * operando2);
        break;
    
    case '/':
    if(operando2 != 0)
    {
        printf("divisione = %lf\n",operando1 / operando2);
    }else printf("undefined\n");
        break;
    }


    return 0;
}