#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{

/*
vector<int> v(3);

v.at(0)=12;
v.at(1)=2;
v.at(2)=3;

cout<<*v.begin()<<endl;
cout<<*v.end()<<endl;
cout<<v.size()<<endl;	
*/

vector<int> vec;
int n;




cin>>n;
int t;

for(int i=0;i<n;i++)
{
	cin>>t;
	vec.push_back(t);	
}

//memset example here IMPORTANT
//memset(&vec[0],0,vec.size()*sizeof(int));



/*
vector<int>::iterator itr;
for(itr=vec.begin();itr!=vec.end();itr++)
{
cout<<*itr<<endl;
}
*/


/*
for(int i=0;i<vec.size();i++)
{
	cout<<vec[i]<<endl;
}

vec.push_back(1);
cout<<*(vec.end()-1)<<endl;
*/

vector<int>::iterator it = vec.begin();
//it+=1;
//cout<<*it<<endl;


//ERASE
vec.erase(vec.begin());




while(it!=vec.end())
{
cout<<"vec="<<*it<<endl;
it=it+1;
}

cout<<"here";





return 0;
}
