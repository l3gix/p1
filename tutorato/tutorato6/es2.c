#include <stdio.h> 
#include <string.h>

void intercalare(char *s1,char *s2,char *s3);

int main(void)
{
    char s[100];
    intercalare("abff","cdefgh",s);
    printf("%s\n",s);
    return 0;
}

void intercalare(char *s1,char *s2,char *s3)
{
    char *ptr = s3;

    while((*s1 != '\0') && (*s2 != '\0'))
    {
        printf("%s and %s\n", s1 ,s2);
        *ptr = *s1;
        ptr++;
        *ptr = *s2;
        ptr++;
        s1++;
        s2++;

    }

    while ( *s1 != '\0')
    {
        *ptr = *s1;
        ptr++;
        s1++;
    }

    while ( *s2 != '\0')
    {
        *ptr = *s2;
        ptr++;
        s2++;
    }

    *ptr = '\0';
}