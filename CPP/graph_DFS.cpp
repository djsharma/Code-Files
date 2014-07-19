#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<stack>

using namespace std;




void DFS(vector<vector<int> >& graph,int n, int m)
{
stack<int> stk;
vector<int> visited(n+1,0);
int u,v;
u=1;
stk.push(u);
	while(!stk.empty())
	{
	u=stk.top();
	stk.pop();
	if(visited[u]==0)
	{
	cout<<u<<"-";
	visited[u]=1;
	
		for(int i=0;i<graph[u].size();i++)
		{
		v=graph[u][i];
		stk.push(v);
		}
	}
	
	}
cout<<"END"<<endl;
}








int main()
{
int n,m;
cout<<"enter the number of vertices:";
cin>>n;
cout<<"enter the number of edges:";
cin>>m;

int a,b;
vector<vector<int> > graph;
vector<int> row;

for(int i=0;i<=n;i++)
{
graph.push_back(row);
}

cout<<"enter the edges:\n";

for(int i=1;i<=m;i++)
{
cin>>a>>b;
graph[a].push_back(b);
graph[b].push_back(a);
}

DFS(graph,n,m);

return 0;
}




