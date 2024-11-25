#include <stdio.h>
#include <string.h>

int provastring(char s[],char s2[])
{
    return (strcmp(s,s2));
}

int main(void)
{   
    char s[20],r[20];
    char *s1 = "end";
    do 
    {
        scanf("%s",s);
        if(!strcmp(s,s1))break;
        strcat(r,s);
        printf("%s\n",r);
    }while(1);

    printf(" %d \n and %d \n" , provastring("ciao","ao"), provastring("a0","hello"));
    printf("%d\n",strncmp("cia","cieo0",2));//quanti carattiri bisogna confrontare 


    return 0;

}