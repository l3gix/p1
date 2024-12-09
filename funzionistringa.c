#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = malloc(40*sizeof(char));
    char *sa = "hello";
    char *x;
    strcpy(s,sa);
    printf("%s\n",s);
    strcat(s,sa);
    printf("%s\n",s);
    x = malloc((strlen(sa)+ 1)*sizeof(char));
    strcat(x,sa);
    printf("%s\n",x);

    if(strcmp(s,"hallo") > 0 ) printf("Prima + grande\n");
    else printf("seconda + grande\n");

    if(!(strncmp(s,sa,strlen(sa)))) printf("si e dentro\n");

    free(s);
    free(x);
    return 0;
}