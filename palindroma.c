#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void alloca(char **s);

int checkpalindroma(char *p);

int main(void)
{
    char *s;
    alloca(&s);
    printf("%d\n",checkpalindroma(s));
    free(s);
    return 0;
}


void alloca(char **s)
{
    *s = malloc(40*sizeof(char *));
    printf("inserisci una stringa :\n");
    scanf("%s",*s);
}

int checkpalindroma(char *p)
{
    char * start = p;
    char * end = p + strlen(p) -1 ;

    while(start < end)
    {
        //printf("%cand%c\n",*start,*end);

        if(*start != *end)
        {
            return 0;
        }

        start++;
        end--;
        
    }

    return 1;
}