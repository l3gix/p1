#include <stdio.h>
#include <string.h>

#define num 101
int main(void)
{
    char string[num],scelta;
    int flag = 0,dim_stringa,i;

    do 
    {
        printf("Questo programma calcola se un numero è palindromo\n");
        printf("Inserisci una stringa di max(100) caratteri \n");
        scanf("%s",string);
        dim_stringa = strlen(string);

        for (i = 1 ; i < dim_stringa / 2 ; i++)
        {
            if(string[i-1] != string[dim_stringa - i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)printf("La stringa %s non e' palindroma\n",string);
        else printf("La stringa %s e' palindro\n",string);
        printf("Vuoi inserire un altra stringa ? (si:s , no:n) : ");
        scanf("%s",&scelta);
    }while(scelta == 's');
    return 0;
}