#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[4][20] = {"giovanni","luca","michele","giacomo"};
    char *s[20] = {"giovanni","luca","michele","giacomo"};
    for(int i = 0; i< 4 ; i++)
    {
        printf("%s \t" , c[i]);
    }
    printf("\n");

    for(int i = 0; i< 4 ; i++)
    {
        for(int j = 0; j < strlen(*(s + i)) ; j++)
        {
            printf("%c \t" , *(*(s + i ) + j));
        }
        printf("\n stringa =  %s \t" , *(s + i));
        printf("\n");
    }
    printf("\n");
    return 0;
}