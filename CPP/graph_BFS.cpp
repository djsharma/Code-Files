#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<queue>

using namespace std;


void BFS(vector<vector<int> >&graph,int n,int m)
{
vector<int> visited(n+1,0);
int v;
int u;
u=1;
visited[1]=1;
queue<int> Q;
Q.push(u);
while(!Q.empty())
{
u=Q.front();
Q.pop();
cout<<u<<"-";
	for(int i=0;i<graph[u].size();i++)
	{
	 v=graph[u][i];
	 
	 if(visited[v]==0)
	 {
	 Q.push(v);
	 visited[v]=1;
	 }
	 
	}


}
cout<<"END"<<endl;



}






int main()
{
int n,m;
vector<vector<int> > graph;
vector<int> row;

cout<<"enter the number of vertices:";
cin>>n;

cout<<"enter the number of edges:";
cin>>m;


for(int i=0;i<=n;i++)
{
graph.push_back(row);
}

cout<<"enter the edges:\n";
int a,b;

for(int i=1;i<=m;i++)
{
cin>>a;
cin>>b;
graph[a].push_back(b);
graph[b].push_back(a);
}


BFS(graph,n,m);

return 0;
}

