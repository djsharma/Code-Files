#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int readcount=0;


char *name=NULL;
//char name[20];
char *first=NULL;
char *second=NULL;
size_t numchar=20;
char *temp=NULL;

getline(&name,&numchar,stdin);

printf("%c\n",name[0]);

   int a=10;


/*
temp=strchr(name,' ');
first=name;
printf(".%c.\n",*(temp-1));
*/
//fgets(name,20,stdin);


return 0;
}
