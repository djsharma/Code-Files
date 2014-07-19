#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
char s[20];


void permute(int n)
{

	if(n==0)
	{
	cout<<s<<":"<<s[0]<<endl;
	return;
	}
// stack not following?

		s[n-1]='0';
		permute(n-1);
		
		s[n-1]='1';
		permute(n-1);
		
}




int main()
{
int n;
cin>>n;
size_t m;
m=n;
memset(s,'0',m);
s[n]='\0';
permute(n);
return 0;
}

