#include<iostream>
#include<cstdio>
#include<list>
#include<cstring>
#include<algorithm>
using namespace std;
class Graph
{
	int v;	//number of vertices
	list<int> *adjlst;	//adjacency list
public:
	Graph(int n)
	{
		v=n;
		adjlst=new list<int>[v+1];
	}
	~Graph(){delete []adjlst;}
	void addEdge(int v1,int v2)
	{
		adjlst[v1].push_back(v2);
		adjlst[v2].push_back(v1);
	}
	void deleteEdge(int v1,int v2)
	{
		list<int>::iterator it=find(adjlst[v1].begin(),adjlst[v1].end(),v2);
		*it=-1;	//invalidate Edge
		it=find(adjlst[v2].begin(),adjlst[v2].end(),v1);
		*it=-1;	//invalidate edge	
	}
	void DFS(int v,bool visited[])
	{
		visited[v]=true;
		list<int>::iterator it;
		for(it=adjlst[v].begin();it!=adjlst[v].end();it++)
		{
			if(visited[*it]!=true)
			DFS(*it,visited);
		}
	}
	bool isConnected()
	{
		int i;
		bool visited[v+1];
		for(i=1;i<=v;i++)
		{
			visited[i]=false;
		}
		for(i=1;i<=v;i++)
		{
			if(adjlst[i].size()>0)
			break;
		}
		if(i==v+1)
			return true;
		DFS(i,visited);
		for(i=1;i<=v;i++)
			if(adjlst[i].size()>0 && visited[i]!=true)
				return false;
		return true;
	}
	int isEulerian()
	{
		if(isConnected()==false)
		return 0;
		int odd=0;
		for(int i=1;i<=v;i++)
			if(adjlst[i].size() & 1)
				odd++;
		if(odd>2)
			return 0;
		if(odd>0)
			return 1;
		return 2;
	}
	void printEulerTour()
	{
		int u=1;
		for(int i=1;i<=v;i++)
			if(adjlst[i].size() & 1)
			{
				u=i;
				break;
			}
		printEulerUtil(u);
		cout<<endl;			
	}
	void printEulerUtil(int u)
	{
		list<int>::iterator it;
		for(it=adjlst[u].begin();it!=adjlst[u].end();it++)
		{
			int v=*it;
			if(v!=-1 && isValidNextEdge(u,v))
			{
				cout<<u<<"-"<<v<<" ";
				deleteEdge(u,v);
				printEulerUtil(v);
			}
		}
	}
	bool isValidNextEdge(int u,int w)
	{
		//case1: if v is the only remaining adjascesnt edge of u
		int count=0;
		list<int>::iterator it;
		for(it=adjlst[u].begin();it!=adjlst[u].end();it++)
			if(*it!=-1)
			count++;
		if(count==1)
		return true;
		
		//case 2: u has multiple edges, and u-v is not a bridge
		//count reachable vertices keeping the edge u-v
		bool visited[v+1];
		memset(visited,false,v+1);
		int cnt1=DFScount(u,visited);
		
		//remove the edge,count reachable vertices
		deleteEdge(u,w);
		memset(visited,false,v+1);
		int cnt2=DFScount(u,visited);
		
		addEdge(u,w);
		
		return (cnt2<cnt1)?false:true;
	}
	int DFScount(int w,bool visited[])
	{
		int count=1;
		visited[w]=true;
		list<int>::iterator it;
		for(it=adjlst[w].begin();it!=adjlst[w].end();it++)
			if(*it!=-1 && visited[*it]==false)
			count+=DFScount(*it,visited);
		return count;
	}
};

int main()
{
	int n,e,v1,v2;
	cin>>n;
	Graph g(n);
	cin>>e;
	for(int i=0;i<e;i++)
	{
		cin>>v1>>v2;
		g.addEdge(v1,v2);
	}
	int temp=g.isEulerian();
	switch(temp)
	{
		case 0:
			cout<<"not Eulerian\n";
			break;
		case 1:
			cout<<"Eulerian Path\n";
			break;
		case 2:
			cout<<"Eulerian Circuit\n";		
	}
	if(temp>0)
	g.printEulerTour();
}
