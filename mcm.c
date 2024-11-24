// mcm = (a * b) / mcd(a,b)

#include<stdio.h>

int main()
{
    int a,b,r = -1,numeratoa,numeratob,mcm;

    scanf("%d",&a);
    scanf("%d",&b);

    numeratoa = a;
    numeratob = b;

    

    if( a < b )
    {
        int t;
        t = a;
        a = b;
        b = t;

    }
    

    while ( r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    // mcd = a 
    printf("mcd = %d\n",a);


    mcm = (numeratoa * numeratob) / a;

    printf("mcm = %d\n",mcm);

}