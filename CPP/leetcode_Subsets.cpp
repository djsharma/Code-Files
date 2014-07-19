#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <set>
#include<vector>

using namespace std;

//class subset
//{
set<int> st; 
static int count;
vector<int> row;
vector<vector<int> > vec;
//public:
void subsets(int i,int n)
{
	set<int>::iterator it;
	if(i==n)
	{
	vec.push_back(row);
	int p=vec.size();
	for(it=st.begin();it!=st.end();it++)
	{
	//vec[p-1].push_back(*it);
	cout<< *it<<"";
	
	}
	cout<<endl;
	return;
	}

st.insert(i);
subsets(i+1,n);
it=st.find(i);
st.erase(it);
subsets(i+1,n);
return;
}

void subsetdata(int i, int n)
{
if(n==0) {return;}
subsets(i,n);
for(int j=0;j<vec.size();j++)
	{
	cout<<"[ ";
	for(int k=0;k<vec[j].size();k++)
		cout<<vec[i][j]<<" ";
	cout<<"]"<<endl;
	}
}



//};

//int subset::count;


int main()
{

//subset obj;
//obj.subsetdata(1,4);
subsetdata(1,2);
return 0;
}
