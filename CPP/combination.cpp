#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;


set<int> st;

void subsets(int i,int n,int k)
{
set<int>::iterator it;
	if(st.size()==k||i==n)
	{
	if(i==n && st.size()!=k) return; 
	cout<<"[ ";
	//print the set
	for(it=st.begin();it!=st.end();it++)
	cout<<*it<<" ";
	cout<<"]"<<endl;
	return; 
	}

st.insert(i);
subsets(i+1,n,k);
it=st.find(i);
st.erase(it);
subsets(i+1,n,k);
return;
}


int main()
{

subsets(1,5,2);

return 0;
}
