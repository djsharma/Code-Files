#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


int gcd(int a,int b)
{
if(a%b==0) return b;
gcd(b,a%b);
}


int main()
{
int a,b;
cin>>a>>b;
	if(a<b)
	{
	int temp;
	temp=a;
	a=b;b=temp;
	}
cout<<gcd(a,b)<<endl;
return 0;
}
