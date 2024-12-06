#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5
/*definizione prototipi*/
char * cercaMax(char *[]);
char * cercaPref (char *[], char *);
char * copyMax (char *);
void copyMax2 (char **);
void stampa_out (char *, char *);
int main()
{
char *data[MAX]={"bgdsjdf","pfofydb","nfhsgase456xhdgsrdi","uetaavd","vcfsxk"}, *MaxString, *pref="uet", *ptrPref;
MaxString=cercaMax(data);
ptrPref=cercaPref(data,pref);
stampa_out(MaxString, ptrPref);
//MaxString=copyMax(MaxString);
copyMax2(&MaxString);

printf("Lastringa più lunga è %s\n", MaxString);
free(MaxString);
}


char * cercaMax(char *data[])
{
    char *max = data[0];
    int  i;  
    for(i = 1 ; i < MAX ; i++)
    {
        if( strlen(data[i]) > strlen(max)) max = data[i];

    }


    return (max);

}

char * cercaPref (char *data[], char *p)
{
    char *r = NULL;
    int i;
    for(i = 0; i < MAX ; i++)
    {
        if(!(strncmp(*(data + i),p,strlen(p))))r = *(data + i );
    }

    return r;
}

char * copyMax (char *s)
{
    char *t = calloc(strlen(s)+1 , sizeof(char));
    if(t)
    {
        strcpy(t,s);
        return (t);
    }else
    {
        exit(0);
    }
}

void stampa_out (char *ptr, char *str)
{
    if(ptr!=NULL)
    if(str!=NULL)
    printf("La stringa che contiene il prefisso è %s\n", str);
}

void copyMax2 (char **s)
{
    char *t = *s;
    *s = calloc(strlen(*s)+ 1, sizeof(char));
    if(*s)
    {
        strcpy(*s,t);
    }else 
    {
        exit(0);
    }
}



