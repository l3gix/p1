#include <stdio.h>
#include <math.h>

double ipotenusa(double c1 , double c2);
int minoreDiTre(int n1 , int n2 , int n3);
void istruzione(void);
int convertiFloat2Int(float n);

int main(void)
{
    printf("ipotenusa = %lf\n", ipotenusa(3.00,3.00));
    printf("il numero minore %d\n", minoreDiTre(1,2,3));
    printf("il numero minore %d\n", minoreDiTre(2,1,3));
    printf("il numero minore %d\n", minoreDiTre(2,3,1));

    printf("conversione in int = %d\n" , convertiFloat2Int(3.55));
}

double ipotenusa(double c1 , double c2)
{
    double result = sqrt(pow(c1,2) + pow(c2,2));
    return result;
}

int minoreDiTre(int n1 , int n2 , int n3)
{
    int r;
    if( n1 > n2 )
    {
        if ( n2 > n3 )
        {
            r = n3;
        }else 
        {
            r = n2;
        }
    }else if( n1 > n3)
    {
        r = n3;
    }else 
    {
        r = n1;
    }

    return r;
}



void istruzione(void)
{

}


int convertiFloat2Int(float n)
{
    return (int)n;
}

