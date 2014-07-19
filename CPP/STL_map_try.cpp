#include<iostream>
#include<string>
#include<map>
#include<stdio.h>
#include<stdlib.h>


using namespace std;


int main()
{
map<string,int> m;

map<string,int> n;


string name;
int number;

n["dj"]=12;


m.insert(pair<string,int>("dob",89));
n.swap(m);
//cout<<m["dj"]<<endl;


map<string,int>::iterator it;
it=n.find("dob");
cout<<it->second<<endl;
cout<<n.at("dob")<<endl;
cout<<(*it).first<<endl;

n.erase(it);
cout<<n.size()<<endl;
m.erase("dj");
cout<<m.size()<<endl;

//n.insert(it,pair<string,int>("ass",10));
//cout<<it->second<<endl;


//cout<<m.size()<<endl;

/*
cout<<m.empty()<<endl;
getline(cin,name);
//cout<<name;

cin>>number;
m[name]=number;
cout<<m[name]<<endl;

//cout<<m.size();
*/



return 0;

}
