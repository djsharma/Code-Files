#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *str,int i,int j)
	{
	 char temp;
	 temp=str[i];
	 str[i]=str[j];
	 str[j]=temp;	 
	}



void permute(char *str,int i,int len)
	{
	 int j;
		if(i==len)
		printf("%s\n",str);	 

	 for(j=i;j<len;j++)
		{
	 	swap(str,i,j);
		permute(str,i+1,len);
		swap(str,i,j); //backtrakking used here
		}
	}





int main()
{

char *str;
size_t maxchar=20;
int len=0;

getline(&str,&maxchar,stdin);
printf("String entered is:");
puts(str);
len=strlen(str);
permute(str,0,len-1);


return 0;
}
