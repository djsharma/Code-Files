#include<stdio.h>
#include<string.h>


int main()
{
int readcount=0;


char *name=NULL;
size_t numchar=20;


getline(&name,&numchar,stdin);

puts(name);

printf("%s",name);
return 0;
}
