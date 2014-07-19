#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;


set<int> st;

void subsets(int i,int n)
{
set<int>::iterator it;
	if(i==n)
	{
	cout<<"[ ";
	//print the set
	for(it=st.begin();it!=st.end();it++)
	cout<<*it<<" ";
	cout<<"]"<<endl;
	return; 
	}

st.insert(i);
subsets(i+1,n);
it=st.find(i);
st.erase(it);
subsets(i+1,n);
return;
}


int main()
{

subsets(1,4);

return 0;
}
