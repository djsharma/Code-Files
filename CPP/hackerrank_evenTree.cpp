#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main()
{
int a,b;
int n,m,i=1;
vector<vector<int> > graph;
vector<int> row;
cin>>n;cin>>m;

for(int j=1;j<=n;j++)
	{
	graph.push_back(row);
	}


i=1;
while(i<=m)
{
cin>>a;
cin>>b;
graph[a].push_back(b);
graph[b].push_back(a);
i++;
}

/*
cout<<endl<<"Adjecency list:"<<endl;

for(int j=1;j<=n;j++)
	{
	for(int k=0;k<graph[j].size();k++)
		{
		cout<<graph[j][k]<<" "; 
		}
	cout<<endl;
	}

*/

map<int,int> degree;
map<int,boolean> visited;
int countvisit=0,maxdeg=0;
map<int,int> parent;

for(int k=1;k<=n;k++)
{
degree[k]=graph[k].size();
if(degree[k]>maxdeg)
maxdeg=degree[k];
parent[k]=graph[k][0];
visited[k]=false;
}


/*
map<int,boolean> visited;

for(int k=1;k<=n;k++)
{
visited[k]=false;
}

*/


/*

for(int k=1;k<=n;k++)
{
cout<<degree[k]<<endl;
}
*/

int deg=1;

while(countvisit<n)
{
	
	
	for(int k=1;k<=n;k++)
	{
		if(degree[k]==deg)
		{
			
		
		}
	
	
	}



}






return 0;
}



