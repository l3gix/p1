#include <stdio.h>
#include <string.h>

void revers(char *s);

int main(void)
{
    char s[50];
    fgets(s,sizeof(s),stdin);
    //printf("%s\n",s);
    revers(s);
    printf("%s\n",s);
    return 0;
}

void revers(char *s)
{
    char *start = s;
    char *end = s + strlen(s)-3;
    char t;
    //strcmp(inv,s);
    
    while( start < end)
    {
        t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }


}