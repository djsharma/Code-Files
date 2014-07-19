#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>


using namespace std;

bool myfunction(int a,int b){return(a>b);}


int main()
{
int a[]={3,6,2,5,9,7,1};
vector<int> v(a,a+7);
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
cout<<*it;
//type 1
//sort(v.begin(),v.end());

//type 2
sort(v.begin(),v.end(),myfunction);


cout<<endl;
for(it=v.begin();it!=v.end();it++)
cout<<*it;
cout<<endl;
return 0;
}


