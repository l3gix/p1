#include <stdio.h>
#include <string.h>

#define MAX 11
int main(void)
{   
    char s[MAX],t;
    printf("inserisci la stringa : ");
    scanf("%s",s);

    int dim = strlen(s);
    for(int i = 1; i <= dim/2 ; i++)
    {
        t = s[i-1];
        s[i-1] = s[dim - i];
        s[dim-i] = t;
    }

    printf("Stringa invertita : %s\n",s);

}