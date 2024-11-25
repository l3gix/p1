#include <stdio.h>
#include <string.h>

int palindom(char *s);

int main(void)
{
    char s[20];
    printf("Inserisci una parola max 19 char");
    fgets(s,sizeof(s),stdin);
    if(palindom(s))printf("Palindromo\n");
    else printf("non Palindromo\n");
    return 0;
}

int palindom(char *s)
{
    int flag = 1;
    char *start = s ; 
    char *end = s + strlen(s) - 3;

    while (start < end)
    {
        //printf("%c and %c\n" ,  *start , *end);
        if(*start  != *end ) 
        {
            flag = 0;
            break;
        }
        start++;
        end--;

    }

    return flag;
}