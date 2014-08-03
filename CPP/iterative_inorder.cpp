#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;

struct treenode
{
int data;
struct treenode * left;
struct treenode * right;
};



void insert(treenode **root,int val)
{

treenode *temp=(treenode *)malloc(sizeof(treenode));
temp->data=val;
temp->left=NULL;
temp->right=NULL;
*root=temp;
}




void iterative_inorder(treenode * root)
{
stack<treenode *> stk;
if(root==NULL) return;

	while(1)	
	{
		while(root!=NULL)
		{
		stk.push(root);
		root=root->left;		
		}
		
		if(stk.empty())
		break;
		
		treenode *temp;
		temp=stk.top();
		stk.pop();
		cout<<temp->data<<" ";
		root=temp->right;
	}
}






	
int main()
{
treenode *root;
insert(&root,1);
insert(&(root->left),2);
insert(&(root->right),3);
insert(&(root->left->left),4);
insert(&(root->left->right),5);
insert(&(root->right->left),6);
insert(&(root->right->right),7);
iterative_inorder(root);
cout<<endl;
return 0;
}
