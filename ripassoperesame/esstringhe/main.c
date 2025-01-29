#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct prova{
    char *s;
}prova;

int main(void)
{
    //printf("%c\n","abc"[1]);
    /*
    char s[]="hello";
    //printf("%s\n",s);
    printf("%.2s\n",s);
    printf("%50.2s\n",s);//50 spostamenti verso destra 
    printf("%s\n",&s[2]);
    printf("%s\n",s + 1);
    */
    /*
    char *p[] = {"nappi","michele"};
    printf("%.2s\n",*(p + 1) + 2);
    */
    /*
    char *c = "michele";
    char *ptr = c;
    c = "b";
    ptr += 2;
    printf("%s\n",c);
    printf("%s\n",ptr );
    */
    /*
    char *p[] = {"ciao", "mondo"};
    printf("%s\n",&p[1][1]);
    */

    char **c = calloc(2,sizeof(char *));
    if(c == NULL)exit(0);
    for(int i = 0; i < 2 ; i++)
    {
        c[i] = calloc(10,sizeof(char ));
        if(c[i] == NULL)exit(0);
    }
    strcpy(c[1],"ciao");
    printf("%s\n",c[1]);

    for(int i = 0; i < 2 ; i++)
    {
        free(c[i]);
    }
    free(c);

    prova *p1 = malloc(2*sizeof(prova));
    if(p1 == NULL)exit(0);
    for(int i = 0 ; i < 2 ; i++)
    {
        (p1 + i ) -> s = malloc(10*sizeof(char));
        if((p1 + i )-> s == NULL)exit(0);
        strcpy(p1[i].s,"hello");
    }
    printf("%s %s\n",(p1 + 1)->s,(p1)->s);

    for(int i = 0; i < 2 ; i++)
    {
        free(p1[i].s);
    }
    free(p1);


    return 0;
}