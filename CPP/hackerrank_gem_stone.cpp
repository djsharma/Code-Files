#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{

int n;
char stone[102][102];
int data[102][26];

cin>>n;

for(int i=0;i<n;i++)
{
	cin>>stone[i];
}


int j=0,t=0;


for(int i=0;i<102;i++)
 for(int k=0;k<26;k++)
  data[i][k]=0;



int sum[26];
for(int i=0;i<26;i++)
	sum[i]=0;


for(int i=0;i<n;i++)
{
	while(stone[i][j]!='\0')
	{
	t=stone[i][j];
	data[i][t-97]=1;
	j++;	
	}
j=0;
}




for(int k=0;k<26;k++)
{
 for(int i=0;i<n;i++)
 {sum[k]=sum[k]+data[i][k];
 }
//cout<<sum[k];
}



int count=0;
for(int i=0;i<26;i++)
{
	if(sum[i]==n)
	{count++;}
}


cout<<count;


return 0;
}

