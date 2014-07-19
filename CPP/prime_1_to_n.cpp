#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;


void find_less(int n)
{


}


void find_more(int n,int a)
{


}



void find_prime(int n)
{
int a;
a=ceil(sqrt(n));

vector<int> v;
v.push_back(2);

	if(a<3)
	{
	find_less(n);
	}   	

	if(a>=3)
	{
	find_more(n,a);
	}

	
}



int main()
{
int n;
cin>>n;

//cout<<a;
	if(n<2)
	{
	cout<<"no prime number"<<endl;
	}

	if(n==2)
	{
	cout<<"2"<<endl;
	}
	
	if(n>2)
	{
	find_prime(n);
	}
	

return 0;
}


