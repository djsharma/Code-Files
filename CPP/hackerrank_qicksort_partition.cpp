#include<iostream>
#include<list>
#include<vector>
using namespace std;


void partition(vector<int>& v)
{

//cout<<"size:"<<v.size()<<endl;
int temp;
int p;
int n=0;

p=v[0];
vector<int>::iterator it=v.begin();
vector<int>::iterator itp=v.begin();
vector<int>::iterator itend=v.end();

//cout<<v.at(it-v.begin());
v.erase(it);
n++;

//cout<<"itendvalue:"<<*(itend-1)<<endl;
//cout<<"size:"<<v.size()<<endl;
//v.push_back(p);

//cout<<"end pointer value:"<<*(itend-2)<<endl;
 while( (*it)!=(*(itend-1)) )
{
//cout<<"v:"<<v.at(it-v.begin())<<":"<<*(itend-1)<<endl;
  if(v.at(it-v.begin())>p)
  {
  temp=v.at(it-v.begin());
  v.erase(it);
  v.push_back(temp);
  itp=it;  
  continue;
  }	

it++;
}

if(v.at(it-v.begin())>p)
  {
  temp=v.at(it-v.begin());
  v.erase(it);
  v.push_back(temp);
  itp=it;
  }

//cout<<"itp:"<<*itp;
v.push_back(0);
int j=v.size()-1;
	for(it=v.end()-1;it!=v.begin();it--)
	{
		if(v[j-1]>p)
		{
		v[j]=v[j-1]; 
		j--;
		}
	
	
	}
v[j]=p;


}



int main()
{
int n;
int temp;
vector<int> v;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>temp;
v.push_back(temp);
}

/*
vector<int>::iterator it=v.begin();
cout<<"vector size initial:"<<v.size()<<endl;
it++;
temp=v.at(it-v.begin());
v.push_back(temp);
v.erase(it);
cout<<"temp value:"<<temp<<endl;
cout<<"position value:"<<*it<<endl;

for(int i=0;i<v.size();i++)
cout<<v[i]<<endl;
*/
   if(v.size()>1)
   { partition(v);}

//cout<<"out:"<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";


return 0;
}



