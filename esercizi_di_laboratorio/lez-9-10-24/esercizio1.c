#include <stdio.h>

int main(void)
{
    int n;
    printf("Inserisci un numero : ");
    scanf("%d",&n);

    printf("Il numero precendete a %d e' %d\n",n,n - 1);
    printf("Il numero succesivo a %d e' %d\n",n,n + 1);
    

    return 0;
}