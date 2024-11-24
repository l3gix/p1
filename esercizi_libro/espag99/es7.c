#include <stdio.h>

int main(void)
{
    int n1,n2,n3,n4,big,small;
    printf("Enter four integer : ");
    scanf(" %d %d %d %d",&n1,&n2,&n3,&n4);

    if ( n1 > n2 && n1 > n3 && n1 > n4)
    {
        big = n1;
        if(n2 < n3 && n2 < n4)
        {
            small = n2;
        }else if(n3  < n4)
        {
            small = n3;
        }else small = n4;
    }else if(n2 > n1 && n2 > n3 && n2 > n4)
    {
        big = n2;
        if(n1 < n3 && n1 < n4)
        {
            small = n1;
        }else if(n3 <  n4)
        {
            small = n3;
        }else small = n4;

    }else if ( n3 > n1 && n3 > n2 && n3 > n4)
    {
        big = n3;
        if(n1 < n2 && n1 < n4)
        {
            small = n1;
        }else if(n2 <  n4)
        {
            small = n3;
        }else small = n4;

    }else if ( n4 > n1 && n4 > n2 && n4 > n3)
    {
        big = n4;
        if(n1 < n2 && n1 < n3)
        {
            small = n1;
        }else if(n3 <  n2)
        {
            small = n3;
        }else small = n2;

    }

    printf("Largest %d \n" , big);
    printf("Smallest %d \n " , small);
    return 0;
}