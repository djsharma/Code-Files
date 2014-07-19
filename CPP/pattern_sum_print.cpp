/*
Write a function, for a given number, print out all different ways to 
make this number, by using addition and any number equal to or 
smaller than this number and greater than zero.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

void patternsum(int a[],int n,int length,int start)
{
	if(n<=0)
	{
	cout<<"s";

	for(int p=0;p<length;p++)
	cout<<a[p];
	cout<<endl;
	return;
	}
	
	for(int i=start;i<n;i++)
	{
	
	a[length]=n;
	patternsum(a,n-i,length+1,i);	
	}


}


int main()
{
int a[200];
int n;
cin>>n;
patternsum(a,n,0,1);

return 0;
}


