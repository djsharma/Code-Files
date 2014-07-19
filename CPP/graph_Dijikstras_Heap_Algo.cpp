#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<map>

using namespace std;





struct compare
{
bool operator() (const int& left, const int & right) const {return (left<right);}
};


map<int,int,compare> data; 

int n,m;
vector<vector<int> > graph;
std::vector<int> row;
int weight[10][10];
set<int> visited;


void dijiktras()
{
	int u,v,wght;
	data[1]=0;
	map<int,int>::iterator it;
	it=data.begin();
	cout<<it->first<<" "<<it->second<<endl; 
	/*
	while(visited.size()!=n)
	{
		//remove the min element and add that to 
	
	
	
	}
	*/
}



int main()
{

int u,v,w;

cin>>n>>m;


for(int i=0;i<n;i++)
{
graph.push_back(row);
data[i]=100000;
}
//graph is represented from vertex number 0 onwards 
for(int i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		graph[u].push_back(v);
		graph[v].push_back(u);
		weight[u][v]=w;
		weight[v][u]=w;
	}

dijiktras();

	return 0;
}
