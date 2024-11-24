#include <stdio.h>
#include <math.h>

int main(void)
{
    double d,Aquadrato,Atriangolo,Acerchio;
    printf("inserisci un numero reale :");
    scanf("%lf",&d);

    Aquadrato = pow(d,2);
    Atriangolo = (sqrt(3) / 4) * pow(d,2);
    Acerchio = M_PI * pow(d,2);

    printf("L' area quadrato di lato D : %lf \n" , Aquadrato);
    printf("L' area triangolo di lato D : %lf \n" , Atriangolo);
    printf("L' area cerchio di lato D : %lf \n" , Acerchio);


    return 0;
}