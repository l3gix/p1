#include <stdio.h>

int main(void)
{
    int i;
    char c; 
    printf("inserici un carattere : ");
    do
    {
        c = getchar();
        if ( c != '\n' ) 
        {
            printf("carettere convertito in int %d\n",c);
            printf("inserici un carattere : ");
        }
    }while(c != ' ');

    return 0;
}