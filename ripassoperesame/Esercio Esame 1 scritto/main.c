#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char *str1;
	char *str2;
	char *str3;
}rec;
void concatenaPref (char s1[], char *s2,char **s3);
void cpyRec (char s1[], char *s2, char*s3, rec ** New);
void freeRec (rec ** New);


int main()
{
	char *s3, string1[]="aaa",*string2="xxxYyyy";
	rec *newRec;
	concatenaPref(string1, string2, &s3);
	cpyRec(string1, string2, s3, &newRec);
	printf("%s %s %s\n", newRec->str1,newRec->str2, newRec->str3);
	freeRec(&newRec);
	return 0;
}

void concatenaPref (char s1[], char *s2,char **s3)
{
	if(strncmp(s1,s2,strlen(s1)) == 0)
	{
		*s3 = calloc(strlen(s2)+1,sizeof(char));
		if(*s3 == NULL)exit(0);
		strcpy(*s3,s2);
	}else 
	{
		*s3 = calloc(strlen(s1) + strlen(s2) + 1 , sizeof(char));
		if(*s3 == NULL)exit(0);
		strcpy(*s3,s1);
		strcat(*s3,s2);
	}
}

void cpyRec (char s1[], char *s2, char*s3, rec ** New)
{
	*New = malloc(sizeof(rec));
	if(*New == NULL)
	{
		printf("Errore Allocazione \n");
		exit(0);
	}
	(*New)->str1 = calloc(strlen(s1)+1,sizeof(char));
	if((*New)->str1 == NULL)
	{
		printf("Errore Allocazione \n");
		exit(0);
	}
	(*New)->str2 = calloc(strlen(s2)+1,sizeof(char));
	if((*New)->str2 == NULL)
	{
		printf("Errore Allocazione \n");
		exit(0);
	}
	(*New)->str3 = calloc(strlen(s3)+1,sizeof(char));
	if((*New)->str3 == NULL)
	{
		printf("Errore Allocazione \n");
		exit(0);
	}
	
	strcpy((*New)->str1,s1);
	strcpy((*New)->str2,s2);
	strcpy((*New)->str3,s3);
	
}

void freeRec (rec ** New)
{
	free((*New)->str1);
	free((*New)->str2);
	free((*New)->str3);
	free(*New);
}
