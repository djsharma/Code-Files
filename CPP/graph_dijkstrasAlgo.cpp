#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
#include<set>
#include<queue>


using namespace std;

vector<vector<pair<int,int> > > graph;

set<int> nonvisited;
set<int>::iterator it;


class comparision
{
public:
	bool operator()(const pair<int,int>& left,const pair<int,int>& right ) const
	{
	return(left.second>right.second);
	}

};





void dijikstra(int n, int m)
{

/*
//showing the graph
for(int i=0;i<n;i++)
	for(int j=0;j<graph[i].size();j++)
	cout<<graph[i][j].first<<","<<graph[i][j].second<<endl;
*/



int u,v,w;
priority_queue<pair<int,int>,vector<pair<int,int> >, comparision> Q;
Q.push(make_pair(0,0));


vector<int> distance(n,10000);
distance[0]=0;

	while(!Q.empty())
	{
	u=Q.top().first;
	w=Q.top().second;
	Q.pop();
	it=nonvisited.find(u);
	nonvisited.erase(it);
	//for all nonvisited virtices do relaxation	
	for(int i=0;i<graph[u].size();i++)
		{
		v=graph[u][i].first;
		if(nonvisited.find(v)!=nonvisited.end())
			{
			//update the distances here
			//push v onto the priority queue
			if(distance[v]>(distance[u]+graph[u][i].second))
				{
				distance[v]=distance[u]+graph[u][i].second;
				}
			Q.push(make_pair(v,distance[v]));//update not done on existing elements in heap			
			}
		
		}
	}


for(int k=0;k<n;k++)
{
cout<<distance[k]<<endl;
}


	
}





int main()
{

int a,b,w;
int n,m;
cin>>n>>m;

vector<pair<int,int> > row;

for(int i=0;i<n;i++)
{
 graph.push_back(row);
 nonvisited.insert(i);
}

for(int i=0;i<m;i++)
{
cin>>a>>b>>w;
graph[a].push_back(make_pair(b,w));
graph[b].push_back(make_pair(a,w));

}

dijikstra(n,m);

return 0;
} 



