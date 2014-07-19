#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<list>
#include<math.h>

using namespace std;
int maxx=0;
class Graph
{
int n,m;

list<int> *adjlist;
public:
//static int maxx;
Graph(int n,int m)
	{
	this->n=n;
	this->m=m;
	adjlist=new list<int>[n+1];
	}

void addEdge(int u,int v);
int diameter(int u);
int getmaxx(){return maxx;}
};

//int Graph::maxx;

int Graph::diameter(int u)
{
list<int>::iterator it;
int p;
int a,b;
p=adjlist[u].size();
if(p==0) return 0;
else	{
	if(p==1)
		{it=adjlist[u].begin();a=diameter(*it);a=diameter(*it);maxx=max(maxx,a);return a+1;}
		else
		{it=adjlist[u].begin();a=diameter(*it);it++;b=diameter(*it);maxx=max(maxx,a+b);return max(a,b)+1;}
	}

}



void Graph::addEdge(int u,int v)
{
adjlist[u].push_back(v);
//adjlist[v].push_back(u);
}



int main()
{
Graph g(6,5);
g.addEdge(1,2);
g.addEdge(1,3);
g.addEdge(2,4);
g.addEdge(4,5);
g.addEdge(5,6);

cout<<g.diameter(1)<<" "<<maxx<<endl;
return 0;
}
