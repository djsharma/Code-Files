#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<list>


using namespace std;

int main()
{
int i=0;

list<int> l;
list<int>::iterator it; 

for(i=1;i<=5;i++)
{
l.push_back(i);
}

it=l.begin();

it++;

l.insert(it,20);

l.insert(it,2,19);

cout<<"it value:"<<*it<<endl;


for(it=l.begin();it!=l.end();it++)
{
cout<<*it<<endl;
}

it=l.begin();
*it=38;


l.reverse();

cout<<"list back:"<<l.back()<<endl;


for(it=l.begin();it!=l.end();it++)
{
cout<<*it<<endl;
}




return 0;
}

