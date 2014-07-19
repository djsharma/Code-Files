#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>

using namespace std;

void sieve(int n)
{
vector<int> vec(n+1,0);
int i=2;

	while(i<n+1)
	{
	if(vec[i]==0) 
		{
			cout<<i<<" ";
			int j=i;
			int m=2;
				while(j<n+2)
				{
				vec[j]=1;
				j=i*m;
				m++;
				}
		}	
	i++;
	}

}

int main()
{
int n;
cin>>n;
sieve(n);
return 0;
}
