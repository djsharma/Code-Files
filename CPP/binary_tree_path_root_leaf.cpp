#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<queue>
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



void pathrootleaf(int a[],treenode *root,int i)
{
if(root==NULL) return;
a[i]=root->data;
if(root->left==NULL && root->right==NULL) 
	{
		for(int k=0;k<=i;k++)
		cout<<a[k]<<" ";
		cout<<endl;
		return;
	}
	
pathrootleaf(a,root->left,i+1);
pathrootleaf(a,root->right,i+1);
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
insert(&(root->right->right->left),8);
insert(&(root->right->right->right),9);
int a[100];
pathrootleaf(a,root,0);
cout<<endl;
return 0;
}
