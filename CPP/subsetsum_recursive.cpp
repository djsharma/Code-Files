#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
using namespace std;
set<int> subset;
set<int>::iterator it;

void printset()
{
for(it=subset.begin();it!=subset.end();it++)
cout<<*it<<" ";
cout<<endl;
}

void subsetsum(int start,int end,int sum,int data[])
{
if(sum==0){printset(); return;}
if(sum<0){return;}
if(start==end) return;
	
	subset.insert(data[start]);
	sum=sum-data[start];
	subsetsum(start+1,end,sum,data);
	it=subset.find(data[start]);
	subset.erase(it);
	sum=sum+data[start];
	subsetsum(start+1,end,sum,data);
	
return;	
}


int main()
{
int data[]={3,34,4,12,5,2};
//int data[]={3,2,4,19,3,7,13,10,6,11};
int end=6;
//int end=10;
int sum=9;
//int sum=17;
subsetsum(0,end,sum,data);
return 0;
}
