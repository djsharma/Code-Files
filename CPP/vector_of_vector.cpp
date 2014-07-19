#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>

using namespace std;

int main()
{
int n;
int a,b;

vector<vector<int> > vec;
vector<int> row;


cin>>n;
int t=n,x;
for(int i=0;i<n;i++)
{
vec.push_back(row);

}


while(t--)
{
cin>>a;
cin>>b;
vec[a-1].push_back(b-1);
}

for(int i=0;i<n;i++)
{
for(int j=0;j<vec[i].size();j++)
{
cout<<vec[i][j]+1;
}

cout<<endl;
}


return 0;
}




