#include <stdio.h>

int main(void)
{
    int n,i=0;
    do{
        printf("inserisci un numero : ");
        scanf("%d",&n);
        printf("potenza = %d\n", n * n);
        printf("inserisci -1 per terminare il programma altrimenti inserisci 1 per continuare\n");
        scanf("%d",&i);
    }while(i != -1);

    return 0;
}