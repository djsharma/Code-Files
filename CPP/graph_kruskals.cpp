//kruskals algorithm with ADT data structure quick union slow find

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector<vector<int> > Graph;
vector<int> row;
vector<pair<int,pair<int,int> > > cost;
vector<int> parent;

bool compare(const pair<int,pair<int,int> >& a,const pair<int,pair<int,int> >& b){return(a.first<b.first);}

int  set_Find(int x)
{
	if(!(x>0&&x<parent.size())) return -1;
	if(parent[x]==x) return x;
	set_Find(parent[x]);
}

void set_Union(int x,int y)
{
	if(set_Find(x)==set_Find(y)) return;
	if(!((x>0&&x<parent.size())&&(y>0&&y<parent.size()))) return;
	parent[x]=y;
}





void kruskals(int n)
{

for(int k=0;k<n;k++)
parent.push_back(k);
//sort the edges according two the cost in increasingorder
sort(cost.begin(),cost.end(),compare);

//for(int k=0;k<cost.size();k++)
//cout<<cost[k].first<<" : "<<cost[k].second.first<<" "<<cost[k].second.second<<endl;


int count=0;
int i=0;
int u,v;
while(count<n-2)
	{
	//select the min cost edge
	pair<int,int> edge;
	edge=cost[i].second;
	//if(set_Find(edge.first)==-1 ||set_Find(edge.second)==-1){i++;continue;}
		if(set_Find(edge.first)!=set_Find(edge.second))
		{
		set_Union(edge.first,edge.second);
		cout<<"edge:"<<edge.first<<" "<<edge.second;
		count++;
		cout<<" : "<<count<<endl;
		}
	
	i++;	
	}

}






int main()
{
int n,m;
cin>>n;
n=n+1;  // graph vertices numbering starts from 1
cin>>m;
int temp;
temp=n;

while(temp--)
{
Graph.push_back(row);
}


temp=m;
int u,v,weight;

while(temp--)
{
cin>>u>>v>>weight;
Graph[u].push_back(v);
Graph[v].push_back(u);
cost.push_back(make_pair(weight,make_pair(u,v)));
}


kruskals(n);


return 0;
}
