#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crypt(char [],int);
void decrypt(char [],int);

int main(void)
{
    char *s;
    int k = 3,n = 10;
    s = malloc((n+1)*sizeof(char));
    if(!s)
    {
        printf("Errore nell alocazione della memoria");
        exit(0);
    }
    printf("inserisci la stringa (MAX 10): ");
    scanf("%s[^\n]",s); // continua finche non trovi lo spazio 

    crypt(s,k);

    printf("%s\n",s);

    decrypt(s,k);

    printf("%s\n",s);
    
    free(s);
    return 0;
}



void crypt(char s[],int k)
{
    int diff = 0;
    int i = 0;
    for(; i < strlen(s) ; i++)
    {
        if((*(s+i)+ k ) > 'z' )
        {
            diff = (*(s+i)+ k ) - 'z';
            *(s+i) = 'a';
            *(s+i) = *(s+i) + diff-1;
        }
        else 
        {
            *(s+i) = *(s+i) + k;
        }
    }
}

void decrypt(char s[],int k)
{
    int diff = 0;
    int i = 0;
    for(; i < strlen(s) ; i++)
    {
        if((*(s+i) - k ) < 'a' )
        {
            diff =  'a' - (*(s+i) - k );
            *(s+i) = 'z';
            *(s+i) = *(s+i) - diff + 1;
        }
        else 
        {
            *(s+i) = *(s+i) - k;
        }
    }
}


/// % 128 e la dimesione del set di caratteri 
