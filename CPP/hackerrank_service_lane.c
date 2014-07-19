#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
int N,T,i=0,j=0;
char *input=NULL;
char N_string[10];
char T_string[10];
size_t maxchar=20;
int width[100000];
int output[1000],p=0,q=0,k;



	getline(&input,&maxchar,stdin);

	while(!isspace(input[i]))
	{
	if(isdigit(input[i]))
 		N_string[i]=input[i];
 	//printf("%c",input[i]);
	i++;
	}
	N_string[i]='\0';
	i=i+1;


	while(isdigit(input[i]))
	{
	if(isdigit(input[i]))
 	{T_string[j]=input[i];}
   	//printf("%c",input[i]);
	i++;
	j++;
	}
	T_string[j]='\0';

	//printf("\n%s",N_string);
	//printf("\n%s",T_string);
	N=atoi(N_string);
	T=atoi(T_string);
	//printf("\n%d",N);
	//printf("\n%d",T);





maxchar=100000;
getline(&input,&maxchar,stdin);
i=0,j=0;
int count=0;
char temp[10];

while(isdigit(input[i])||isspace(input[i]))
{
	if(isdigit(input[i]))
	{
	temp[j]=input[i];
	//printf("%c",input[i]);	
	i++;
	j++;
	}
	else
	{
	temp[j]='\0';
	width[count]=atoi(temp);
	//printf(".space.");		
	i++;
	j=0;
	count++;
	}
}


//for(i=0;i<count;i++)
// printf("\n%d",width[i]);

int min=3;

	for(k=0;k<T;k++)
	{
        i=0,j=0;
	input=NULL;
		getline(&input,&maxchar,stdin);

		while(!isspace(input[i]))
		{
		if(isdigit(input[i]))
 			N_string[i]=input[i];
 		//printf("%c",input[i]);
		i++;
		}
		N_string[i]='\0';
		i=i+1;


		while(isdigit(input[i]))
		{
		if(isdigit(input[i]))
 		{T_string[j]=input[i];}
   		//printf("%c",input[i]);
		i++;
		j++;
		}
		T_string[j]='\0';

		//printf("\n%s",N_string);
		//printf("\n%s",T_string);
		p=atoi(N_string);
		q=atoi(T_string);
		//printf("\n%d",N);
		//printf("\n%d",T);

			min=3;
			for(i=p;i<=q;i++)		
			{
			if(width[i]<min)
			min=width[i];
			}
			output[k]=min;

	}


for(k=0;k<T;k++)
	{
printf("%d\n",output[k]);
	}


return 0;
}
