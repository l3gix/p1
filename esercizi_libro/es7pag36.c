/* 
pag 36
es7 scrivere un programma che chieda all'utente di inserire un importo in dollari e poi mostri come pagarlo utilizzando
il minor numero di biglietti da 20$ , 10$, 5$ e 1$

Enter a dollar amount: 93
20$ bills : 4;
10$ bills : 1;
5$ bills : 0;
1$ bills : 0;
*/

#include <stdio.h>

int main(void)
{
    int inputdollar,t,diff;
    const int venti = 20, dieci = 10, cinque = 5, uno = 1;

    printf("Enter a dollar amount: ");
    scanf("%d",&inputdollar);

    t = inputdollar / venti ;
    diff = inputdollar - ( t * venti);
    printf("20$ bills : %d\n",t);

    t = diff / dieci ;
    diff = diff - (t * dieci);
    printf("10$ bills : %d\n",t);

    t = diff / cinque ;
    diff = diff - (t * cinque);
    printf("5$ bills : %d\n",t);

    t = diff / uno ;
    diff = diff - (t * uno);
    printf("1$ bills : %d\n",t);

    return 0;

}

