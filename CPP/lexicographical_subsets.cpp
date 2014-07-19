#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
char str[20];

//initially pass k=0; nis size of max subset

void lexi_subsets(int n,int k,int m)
{
if(k<(m)&& k>0){cout<<str<<endl;}
if(k==(m)){cout<<str<<endl;return;}

	for(int i=0;i<n;i++)
	{
	int temp=65+i;
	str[k]=temp;
	str[k+1]='\0';
	lexi_subsets(n,k+1,m);
	}
} 




int main()
{
int n,m;

//cout<<"hello world";
cin>>n>>m;

memset(str,'0',20);

//call the function here
lexi_subsets(n,0,m);
return 0;
}
