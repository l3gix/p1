#include <stdio.h>

int rimuovi_vocali(char* str); 

int main(void)
{
    char s[] = "ciao";
    rimuovi_vocali(s);
    printf("%s\n",s);
    return 0;
}

int rimuovi_vocali(char* str)
{
    char *t = str;
    int conta = 0;
    while (*str  != '\0')
    {
        switch (*str)
        {
            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'U': case 'u':
                conta++;
                break;
            default:
                *t = *str;
                t++;
                break;
        }
        str++;
    }
    *t = '\0';
    //printf("stringa = %s\n", t);
    str = t;
    return conta;
}