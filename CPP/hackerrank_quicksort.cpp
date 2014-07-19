#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int partitionQuicksort(vector<int>& vec,int size)
{
int temp;
	if(vec.size()==1)
	{
	return -1;
	}

	int p;
	p=vec[0];
	//cout<<p<<endl;
	int i,j;
	i=1;
	j=vec.size()-1;

	while(i<=j)
	{
		while(vec[i]<=p)
		{i++;}	
		while(vec[j]>p)
		{j--;}	
		if(i<j)
		{
		temp=vec[j];
		vec[j]=vec[i];
		vec[i]=temp;
		}
	

	}	

return j;
}





int main()
{
vector<int> v;

vector<int>::iterator it;
int size,temp;
cin>>size;
vector<int> R(size,0);
vector<int> T(size,0);

for(int i=0;i<size;i++)
{
cin>>temp;
v.push_back(temp);
}


for(int i=1;i<v.size();i++)
{
R[i]=v[i];
}


temp=v[0];
//cout<<"partition"<<endl;
int get;
get=partitionQuicksort(v,size);
/*
for(it=v.begin();it!=v.end();it++)
cout<<*it<<endl;
*/

//cout<<"position:"<<get<<endl;


int p=0,q;
q=get+1;
for(int i=1;i<=R.size();i++)
{
	if(R[i]<temp)
	{
	T[p]=R[i];
	p++;
	}
	else{
	T[q]=R[i];
	q++;
	}
}
T[get]=temp;

for(it=T.begin();it!=T.end();it++)
cout<<*it;




return 0;
}
