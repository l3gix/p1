#include <stdio.h>

void azzera_da(char [], int);

int main(void)
{
    char c[100];
    //char c[]="GiovanniLatella";
    printf("Inserisci una stringa : ");
    fgets(c,sizeof(c),stdin);

    printf("Stringa originale : %s\n",c);
    azzera_da(c,7);
    printf("stringa modificata : %s\n",c);
    return 0;
}

void azzera_da(char s[], int n)
{
    char *t = s + n;
    for(t++; *t != '\0'; t++)
    {
        *t = '0';
    }

}
