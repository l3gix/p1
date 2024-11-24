#include <stdio.h>
#include <string.h>
#define MAX 11
int leggi_stringa(char []); /*NON IMPLEMENTARE:*/
int contaVocCons (char [], int [], int); /*IMPLEMENTARE*/
void memVocInd (char [], int [], int); /*IMPLEMENTARE*/
void stampa(char [], int [], int, int [], int); /*IMPLEMENTARE*/
int main(void)
{
int vocaliCounter[5]={0}, dim_stringa, numConsonanti,indVoc[MAX]={0};char stringa[MAX];
scanf("%s",stringa);
dim_stringa=leggi_stringa(stringa);
numConsonanti=contaVocCons(stringa, vocaliCounter, dim_stringa);
memVocInd (stringa, indVoc, dim_stringa);
stampa(stringa, vocaliCounter, numConsonanti, indVoc, dim_stringa);

}
char to_lower(char c)
{  
    int t = (char) c;
    printf("%d\n",t);
    char r = c;
    if(t >= 65 && t <= 90) 
    {
    t = t + 32;
    r = t + '0';
    }
    printf("%c",r);
    return c;
}

int leggi_stringa(char stringa[])
{
    return strlen(stringa);
}

int contaVocCons (char stringa[], int vocaliCounter[], int dim_stringa)
{
    int nconsonati = 0,i;
    for(i = 0; i < dim_stringa ; i++)
    {
        if(stringa[i] == 'a' || stringa[i] == 'A') vocaliCounter[0]++;
        else if (stringa[i] == 'e' || stringa[i] == 'E')vocaliCounter[1]++;
        else if (stringa[i] == 'i' || stringa[i] == 'I')vocaliCounter[2]++;
        else if (stringa[i] == 'o' || stringa[i] == 'O')vocaliCounter[3]++;
        else if (stringa[i] == 'u' || stringa[i] == 'U')vocaliCounter[4]++;
        else if((stringa[i] >= 'a' && stringa[i] <= 'z') || (stringa[i] >= 'A' && stringa[i] <= 'Z'))nconsonati++;
    }
    //printf("%d\n",nconsonati);
    return nconsonati;
}

void memVocInd (char stringa[], int indVoc[], int dim_stringa)
{
    int i;
    for(i = 0; i < dim_stringa ; i++)
    {
        if( stringa[i] == 'a' || stringa[i] == 'A' || 
            stringa[i] == 'e' || stringa[i] == 'E' ||
            stringa[i] == 'i' || stringa[i] == 'I' ||
            stringa[i] == 'o' || stringa[i] == 'O' ||
            stringa[i] == 'u' || stringa[i] == 'U' 
        )indVoc[i]=1;
    }
}

void stampa(char stringa[], int vocaliCounter[], int numConsonanti, int indVoc[], int dim_stringa)
{
    int nvocali = 0,i,pvocali[5]={0};
    printf("Stringa in input : %s\n",stringa );
    for(i = 0; i < 5 ; i++)
    {
        nvocali += vocaliCounter[i];
    }
    printf("Numero Vocali stringa : %d \n" , nvocali);
    printf("Numero Consonanti : %d \n",numConsonanti);

    
    printf("Numero di a/A=%d, Numero di e/E=%d, Numero di i/I=%d, Numero di o/O=%d, Numero di u/U=%d\n",vocaliCounter[0],vocaliCounter[1],vocaliCounter[2],vocaliCounter[3],vocaliCounter[4]);
    //Numero di a/A=1, Numero di e/E=0, Numero di i/I=1, Numero di o/O=1, Numero di u/U=0
    printf("Vettore indVoc: ");
    for(i = 0; i < dim_stringa ; i++)
    {
        printf("%d",indVoc[i]);
    }
    printf("\n");

}



