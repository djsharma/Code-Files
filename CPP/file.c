#include<stdio.h> // c has stdio instead of iostream that is in cpp
#include<math.h>
#include<string.h>

int main()
{
int a=10,i=0;
char name[200];

char first[100];
char second[100];
char temp;
char n=' ';

//fgets(name,200,stdin);

/*
n='A';
//name[0]=getchar();

//scanf("%s",name+1);// scanf does not read after space
n=n+1;
printf("%c\n",n);// B printed
*/
/*
temp=name[0];
while(temp!='\0')
{
i++;
temp=name[i];
}

printf("%d\n",i);
printf("%d\n",n);
printf("%d\n",name[6]);
*/

scanf("%[^\n]",name);

printf("%s\n",name);

getchar();
scanf("%[^\n]",first);
printf("%s\n",first);
   
//printf("%s\n",name);

return 0;
}
