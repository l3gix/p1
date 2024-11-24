#include <stdio.h>
#include <string.h>

#define DIM 21

int main()
{
    char string[DIM],string1[DIM];
    int dim;
    printf("Inserisci due stringhe (MAX 20 caratteri)\n");
    printf("Stringa : ");
    scanf("%s",string);
    printf("Stringa : ");
    scanf("%s",string1);

    if(strlen(string) > strlen(string1))
    {
        dim = strlen(string1);
        if(!(strncmp(string1,string,dim)))
        {
            printf("\nString : %s \nPrefix : %s\n",string,string1);
        }else printf("La stringa inserita non è prefix\n");
        
    }else 
    {
        dim = strlen(string);
        if(!(strncmp(string1,string,dim)))
        {
            printf("\nString : %s \nPrefix : %s\n",string1,string);
        }else printf("La stringa inserita non è prefix\n");
    }

    return 0;
}