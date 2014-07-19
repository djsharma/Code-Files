#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

bool inc(unsigned long long int i,unsigned long long int j){return(i<j);}
bool decrement(unsigned long long int i,unsigned long long int j){return(i>j);}

int main()
{
    int t;
    cin>>t;
    vector<unsigned long long int> a;
    vector<unsigned long long int> b;
   bool check=false;
   int n,nm; 
   unsigned long long k,temp;
   
   while(t--)
   {
   a.clear();
   b.clear();
   check=false;
   cin>>n>>k;
   nm=n;
   
   	while(nm--)
  	 {
   		cin>>temp;
   		a.push_back(temp);
   	 }
   
   nm=n;
   	while(nm--)
   	{
   		cin>>temp;
   		b.push_back(temp);
   	}
   
   
   sort(a.begin(),a.end(),inc);
   sort(b.begin(),b.end(),decrement);
   
   
   
   
   for(int i=0;i<n;i++)
   {
   cout<<a[i];  
   }
   cout<<endl;
   
   for(int i=0;i<n;i++)
   {
   cout<<b[i];  
   }
   cout<<endl;
   
	   
   
   
   
   
   for(int i=0;i<n;i++)
   {
   	if(a[i]+b[i]<k)
   	{
   	check=true;
   	break;   	
   	}
      
   }
   
   if(check)
   {
   cout<<"NO"<<endl;   
   }
   else
   {
   cout<<"YES"<<endl;
   }
   
   
   
   
   }
   
   
   
   
   
   
   
    
return 0;    
}
