#include <stdio.h>

int main(void)
{
    int i = 0;
    char c[]="SARA";
    char *c_ptr = "LUCA";
    while (c[i] != '\0')
    {
        c[i] = *(c_ptr + i);
        i++;
    }
    printf("%s\n",c);
    return 0;
}