#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int temp[2][26];

void cleantemp(int t)
{

	for(int i=0;i<26;i++)
	{ 
  	temp[0][i]=0;
	temp[1][i]=0;
	}
//cout<<"tempcleaned";
}


int main()
{
int t;
char str[101][10002];
int result[101];


cin>>t;

for(int i=0;i<t;i++)
{ cin>>str[i];
  result[i]=0;
}

int count=0;
int p=0,q=0,x=0,sum=0;
int ascii=0;
//-------------

cleantemp(t);

for(int i=0;i<t;i++)
{
p=0;
x=0;
count=0;
q=strlen(str[i])-1;
	while((p<q)&&(p!=q))
	{
	ascii=str[i][p];
	temp[0][ascii-97]+=1;	
	ascii=str[i][q];
	temp[1][ascii-97]+=1;		
	p++;
	q--;	
	}




if(p>q)
{

for(int k=0;k<26;k++)
	{
	x=0;
	x=temp[0][k]-temp[1][k];
	if(x<0)
	{x=x*(-1);}	
	temp[0][k]=x;	
	}


}

sum=0;
for(int m=0;m<26;m++)
 {
 sum=sum+temp[0][m];
 }

result[i]=sum/2;

/*
for(int k=0;k<26;k++)
{ 
cout<<temp[0][k];
}
cout<<"\n";
*/


if(p==q)
{
result[i]=-1;
}




cleantemp(t);
}


//--------------


for(int i=0;i<t;i++)
cout<<result[i]<<endl;

return 0;
}

//hhpddlnnsjfoyxpci ioigvjqzfbpllssuj

//dnqaurlp lofnrtmh


