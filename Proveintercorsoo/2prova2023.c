#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 7

typedef struct{
char *str1;
char *str2;
}info;

int cancStr(char *data[], char *ptr, char **ptrStr);
info copyRec(char * ptr, char *ptrStr);
void stampa(info rec);
void freeRec(info rec);


int main()
{
    char
    *data[MAX]={"aaabexg","bgdsjdf","dweart","pfofydb",
    "nfhsgase456xhdgsrdi","uetaavd","vcfsxk"},
    *ptr="bgd", *ptrStr;

    info rec;

    if(cancStr(data,ptr,&ptrStr))
    {
        rec=copyRec(ptr,ptrStr);
        stampa(rec);
        freeRec(rec);
    }
}


int cancStr(char *data[], char *ptr, char **ptrStr)
{
    int i;
    for(i = 0; i < MAX ; i++)
    {
        if(!strncmp(*(data + i),ptr , strlen(ptr)))
        {

            *ptrStr = malloc((strlen(*(data + i)) + 1)  * sizeof(char));
            if(*ptrStr == NULL)exit(0);

            strcpy(*ptrStr,*(data + i));
            *(data + i) = NULL;
            return 1;
        }
    }
    return 0;
}

info copyRec(char * ptr, char *ptrStr)
{
    info i;
    i.str1 = malloc((strlen(ptr) + 1 )* sizeof(char) );
    i.str2 = malloc((strlen(ptrStr) + 1 )* sizeof(char) );
    strcpy( i.str1,ptr);
    strcpy( i.str2,ptrStr);

    return (i);

}

void stampa(info rec)
{
    printf("%s \n%s \n " ,rec.str1,rec.str2);
}

void freeRec(info rec)
{
    free(rec.str1);
    free(rec.str2);
}