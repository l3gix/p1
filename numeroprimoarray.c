#include<stdio.h>
#include<math.h>

#define NMAX 50
int main(void)
{
    int min,max,i,indice,flag,j=0;
    int v[NMAX];
    printf("inserisci indice piccolo : ");
    scanf("%d",&min);
    printf("inserisci indice max : ");
    scanf("%d",&max);

    for(indice = min ; indice < max ; indice++)
    {
        if(indice % 2 != 0)
        {
            for(i = 3,flag = 1 ; i <= sqrt(indice) ; i+=2)
            {
                //printf("nel ciclo %d mod %d\n",indice,i);
                if(!(indice % i))
                {
                    //printf("%d mod %d\n",indice,i);
                    flag = 0;
                    break;
                }
            }
        }else flag = 0;

        if(flag)
        {
            
            v[j] = indice;
            j++;
        }
    }
    
    for(i = 0; i < j ; i++)
    {
        printf("%d\t",v[i]);
    }
    printf("\n");
    return 0;
}