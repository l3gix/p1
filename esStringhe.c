#include <stdio.h> 
#include <string.h>

#define MAX 100

void toUpperCase(char []);
void toLowerCase(char []);
void reversString(char []);

int main(void)
{
    char s[MAX] ={"ciao"};
    toUpperCase(s);
    printf("%s\n",s);
    toLowerCase(s);
    printf("%s\n",s);
    reversString(s);
    printf("%s\n",s);
    return 0;
}

void toUpperCase(char s[])
{
    int i = 0;
    for (; i <  strlen(s); i++)
    {
        if ( s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

void toLowerCase(char s[])
{
    int i = 0;
    for (; i < strlen(s) ; i++)
    {
        if ( s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}

void reversString(char s[])
{
    int i = 1,t,dim = strlen(s);
    for(; i <= dim / 2 ; i++)
    {
        t = s[i-1];
        s[i-1] = s[dim-i];
        s[dim - i] = t;
    }
}
