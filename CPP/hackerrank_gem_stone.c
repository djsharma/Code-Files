#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main()
{
int n,i,j;
char stone[101][101];
size_t maxchar=101;
char *temp=NULL;
char data[101][26];
int t;

scanf("%d",&n);
getchar();

for(i=0;i<n;i++)
{
getline(&temp,&maxchar,stdin);
strcpy(stone[i],temp);
temp=NULL;
}


for(i=0;i<n;i++)
{
	for(j=0;j<(strlen(stone[i])-1);j++)
	{
	data[i][j]=0;
	}
}


for(i=0;i<n;i++)
{
	for(j=0;j<(strlen(stone[i])-1);j++)
	{
	 t=stone[i][j];
	if(isalpha(stone[i][j]))	 
	data[i][t-97]=1;
	}
}


int sum=0;
int result[26];

for(i=0;i<26;i++)
{
	for(j=0;j<n;j++)	
	{
	sum=sum+data[j][i];
	}

result[i]=sum;
printf("\n%d",sum);
sum=0;
}

int count=0;
for(i=0;i<26;i++)
{
if(result[i]==n)
	{count++;}
}


printf("\n\n%d",count);

//t='a';
//printf("\n%d",t);

return 0;
}



