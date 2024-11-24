#include <stdio.h>
#define NMAX 10

int main(void)
{
int input[NMAX]={12, 1, 5, 121, 28, 498, 22, 8127, 1000, 6}, output[NMAX], counter, div,sum,i,j;
counter = 0;

for ( i = 0; i < NMAX ; i++)
{
    for(div = 1,sum = 0 ; div < input[i] ; div++)
    {
        if(input[i] % div == 0)
        {
            sum += div;
        }

    if(input[i] == sum)
        {
            output[counter] = sum;
            counter++;
        }
    }


}

if( counter == 0)printf("Non ci sono elementi nell array \n");
else 
{
    for(j = 0 ; j < counter ; j++)
    {
        printf("%d \t",output[j]);
    }
}

return 0;

}