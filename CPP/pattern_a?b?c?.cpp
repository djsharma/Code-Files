#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;

vector<int> pos;
vector<int> perm;
string str;
int size;

void display()
{
int p=0;

	for(int j=0;j<size;j++)
	{
	if(pos[p]==j)
		{
		cout<<perm[p];
		p++;
		continue;
		}
	cout<<str[j];	
	}
cout<<endl;
}


void permutation(int n)
{
	if(n==perm.size())
	{
	display();
	return;
	}


	perm[n]=0;
	permutation(n+1);
	perm[n]=1;
	permutation(n+1);
return;
}



int main()
{
int n;
int i=0;

cin>>str;

int count=0;


while(str[i]!='\0')
{
	if(str[i]=='?')
	{pos.push_back(i);
	count++;
	perm.push_back(0);
	}
i++;
}

size=i;

permutation(0);



return 0;
}


