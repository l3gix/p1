#include <stdio.h>
#include <string.h>

#define N 11


void input_array(char []);
void stampa_array(char []);
int contaCarattere(char []);

int main(void)
{
    int occorenze;
    char s[N];
    printf("inserisci una stringa (Max 10 char) : ");
    input_array(s);
    stampa_array(s);
    occorenze = contaCarattere(s);
    printf("Numero di occore : %d\n",occorenze);
    return 0;
}

void input_array(char s[])
{
    scanf("%s",s);
}

void stampa_array(char s[])
{
    printf("Stringa inserita : %s",s);
}

int contaCarattere(char s[])
{
    int i,conta = 0;
    char c;
    printf("Inserisci un char da cercare : ");
    scanf("%s",&c);
    for(i = 0; i < strlen(s) ; i++)
    {
        if(s[i] == c)conta++;
    }

    return conta;
}






