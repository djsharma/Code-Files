#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;



struct node
{
int data;
struct node *next;
};


struct node * pairwiseSwap(node * start)
{
node * lead,* first,* second, * temp;

first=start;
second= first->next;
start=second;
temp=second->next;
second->next=first;
first->next=temp;
lead = first;

while(lead->next!=NULL&& lead->next->next!=NULL)
{
first=lead->next;
second=lead->next->next;
temp=second->next;
second->next=first;
first->next=temp;
lead->next=second;
lead=lead->next->next;
}

return start;

}








int main()
{
node * start;
node * last;
node * temp;
int n,data;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>data;
temp=(node *)malloc(sizeof(node));
temp->data=data;
temp->next=NULL;
	if(i==0)	
	{
	start=temp;
	last=temp;
	}
	else
	{
	last->next=temp;
	last=last->next;	
	}

}



start=pairwiseSwap(start);


temp=start;
while(temp!=NULL)
{
cout<<temp->data<<"-->";
temp=temp->next;
}
cout<<"NULL"<<endl;




return 0;
}


