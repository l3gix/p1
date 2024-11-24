#include <stdio.h>

int main(void)
{
    int o,m,i = 1;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&o,&m);
    printf("Equivalent 12-hour time: ");

    switch (o)
    {
    case 0:
        printf(" %02d:%02d AM\n", 12 , m);
        i = 0;
        break;
    case 12:
        printf(" %02d:%02d PM\n", o , m);
        i = 0;
        break;
    }
    if( i == 1)
    {
        if( o > 12 )
        {
            o -= 12;
            printf(" %02d:%02d PM\n", o , m);
        }else printf(" %02d:%02d AM\n", o , m);
    }

}