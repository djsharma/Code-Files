#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
vector<int> vec;
int n;
cin>>n;
vec.resize(n);

fill(vec.begin(),vec.end(),4);

//vec.at(4)=0;
//cout<<vec.size()<<endl;


//vec.pop_back();
vector<int>::iterator itr=vec.begin();


while(itr!=vec.end())
{

cout<<*itr<<endl;
itr++;
}



return 0;
}
