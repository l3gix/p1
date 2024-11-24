#include<stdio.h>

#define NMAX 10
int main(void)
{
    int a[NMAX]={10,30,25,4},i,elm,pos,n=4;
    char scelta[1];
    for(i = 0; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }printf("\n");
    do 
    {
        printf("Inseriri elemento (1),Togliere elemento (2) : ");
        scanf("%s",scelta);
        switch (scelta[0])
        {
        case '1':
            if(n < NMAX)
            {
                printf("Inserisci indice : ");
                scanf("%d",&pos);
                printf("Inserisci l'elemento : ");
                scanf("%d",&elm);

                for(i = n ; i > pos ; i--)
                {
                    a[i] = a[i-1];
                }
                n++;
                a[pos] = elm;
            }else printf("Non puoi inserire elementi array pieno\n");
            break;
        case '2' :
            if(n > 0)
            {
                printf("Inserisci indice dell' elemento da cancellare :");
                scanf("%d",&pos);

                for(i = pos ; i < n-1 ; i++)
                {
                    a[i] = a[i+1];
                }
                n--;

            }else printf("Array vuoto");
            break;
        }

        printf("Valore Array aggiornato\n");
        for(i = 0; i < n ; i++)
        {
            printf("%d\t",a[i]);
        }

        printf("\nSe vuoi fare altre operazioni inserisci (s) , altrimenti per terminare il programma (n) :");
        scanf(" %s",scelta);
    }while (scelta[0] == 's');
    return 0;
}