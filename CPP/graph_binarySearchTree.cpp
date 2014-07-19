#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node
{
int data;
struct node * left;
struct node * right;
};


struct node * traverse(struct node * root, int data)
{
struct node * temp;
temp=root;

	if(temp==NULL) return NULL;
	if(temp->data>=data){
		if(temp->left==NULL) return temp; 
	temp=traverse(temp->left,data); 
	}
	if(temp->data<data){ 
		if(temp->right==NULL) return temp;
	temp=traverse(temp->right,data);
	}
return temp;
}




struct node * createTree(int n)
{
struct node * temp,* root,* pos;

int data,t;
t=n;
	while(t--)
	{
	cin>>data;
	temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
		if(t==n-1)
		{
		root=temp;
		}
		else
		{
		//traverse from root to correct position
		pos=traverse(root,data);
		if(pos->data>=data) pos->left=temp;
		if(pos->data<data)  pos->right=temp;
		}
	}

return root;
}




void inorder(struct node * temp)
{
if(temp==NULL) return;
inorder(temp->left);
cout<<temp->data<<"  ";
inorder(temp->right);
}



struct node * findMin(node * root)
{
struct node * t;
t=root;
while(t->left!=NULL)
{t=t->left;}
return t;
}



struct node * findparent(node * root)
{
struct node * t, * p;
t=root;
p=root;
while(t->left!=NULL)
{
p=t;
t=t->left;
}
return p;
}







void deletenode(struct node * root,int data)
{
	struct node * temp,* tempp, *y, *yp;
	temp=root;
	tempp=root;
//search the data containing node
	while(temp->data!=data && temp!=NULL)
	{
	tempp=temp;
	if(temp->data>data) temp=temp->left;
	if(temp->data<data) temp=temp->right;
	}


	if(temp==NULL) {cout<<"data node not found"<<endl; return;}		
//data node to be deleted is identified as temp
//case 1:
	if(temp->left==NULL)
		{
		if(tempp->left==temp) tempp->left=temp->right;
		if(tempp->right==temp) tempp->right=temp->right;
		}
//case 2:
	if(temp->right==NULL)
		{
		if(tempp->left==temp) tempp->left=temp->left;
		if(tempp->right==temp) tempp->right=temp->left;
		}
//case 3:
	else
		{
		y=findMin(temp->left);		
		yp=findparent(temp->left);				
		yp->left=y->right;
		tempp->right=y;
		y->right=temp->right;
		}



free(temp);


}

		

	
int main()
{
int n,data;
//number of nodes
cin >>n;

struct node * root;

root=createTree(n);

cout<<"enter node to delete:";
cin>>data;

deletenode(root,data);

inorder(root);

return 0;
}


