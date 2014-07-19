#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
int data;
struct node *next;
};


node * add_node_start(int data,node *start)
{
node *temp;
temp=(node*) malloc(sizeof(node));
temp->data=data;
temp->next=start;
start=temp;
return start;
}



node * add_node_last(int data,node *start)
{
node *temp;
node *trv;
temp=(node*) malloc(sizeof(node));
temp->data=data;
temp->next=NULL;
trv=start;
while(trv->next!=NULL)
{
trv=trv->next;
}

trv->next=temp;
return start;
}





node * add_node_at(int data,node *start,int pos)
{
int i=1;
node *temp;
node *trv;
temp=(node*) malloc(sizeof(node));
temp->data=data;
temp->next=NULL;
trv=start;

while(i<(pos-1))
{
trv=trv->next;
pos++;
}





trv->next=temp;
return start;
}








int main()
{
int number_data;
node *n;
node *start;
node *temp;
start=NULL;
/*
n=(node *)malloc(sizeof(node));
n->data=20;
n->next=NULL;
start=n;


start=add_node_start(1,start);

start=add_node_last(2,start);

temp=start;
*/

temp=NULL;

cin>>number_data;
int i=1,data;
if(number_data>0)
{
n=(node *)malloc(sizeof(node));
cin>>data;
n->data=data;
n->next=NULL;
i++;
start=n;

}
temp=start;
while(i<=number_data)
{
cin>>data;
n=(node *)malloc(sizeof(node));
n->data=data;
n->next=NULL;
temp->next=n;
temp=n;
i++;
}



/*
cout<<n->data<<endl;
temp=(node *)malloc(sizeof(node));
temp->data=1;
temp->next=start;
start=temp;


cout<<temp->data<<endl;
temp=temp->next;
cout<<temp->data<<endl;
if(temp->next==NULL)
cout<<"null found"<<endl;
*/

temp=start;

start=add_node_start(100,start);

start=add_node_last(200,start);

temp=start;




if(start!=NULL)
{
	while(temp!=NULL)
	{
	cout<<temp->data<<endl;
	temp=temp->next;

	}
}






return 0;
}


