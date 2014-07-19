#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node
{
int data;
struct node *next;
};


node * reverse(node *start,int n)
{
node *a;
node *b;
node *c;
node *temp;

if(n==1)
{return start;}

if(n==2)
{
a=start;
b=start->next;
b->next=start;
a->next=NULL;
return start;
}


a=start;
temp=start;
b=start->next;
c=start->next->next;

while(c!=NULL)
	{
	b->next=a;
	a=b;
	b=c;
	c=c->next;
	}
b->next=a;
temp->next=NULL;
start=b;

return start;

}






int main()
{

int n;
cin>>n;
//int k;
//cin>>k;

node *start,*temp, *prev;
int i=1,d;


while(i<=n)
{

temp=(node *)malloc(sizeof(node));
cin>>d;
temp->data=d;
temp->next=NULL;
if(i==1)
{start=temp;
prev=temp;
}

prev->next=temp;
prev=temp;
i++;
}

start=reverse(start,n);

//display the list
temp=start;
while(temp!=NULL)
{
cout<<temp->data<<"-->";
temp=temp->next;
}
cout<<"NULL"<<endl;




return 0;
}


