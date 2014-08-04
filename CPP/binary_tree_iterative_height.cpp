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


int treeheight(treenode * root)
{
int count=0;
queue<treenode *> Q;
Q.push(root);
Q.push(NULL);
treenode * temp;
	while(!Q.empty())
	{
	temp=Q.front();
	Q.pop();
	if(temp==NULL)
		{
		if(!Q.empty()) Q.push(NULL);
		count++;
		}
			else
			{
			if(temp->left) Q.push(temp->left);
			if(temp->right) Q.push(temp->right);	
			}
	
	}
return count;
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
cout<<treeheight(root);
cout<<endl;
return 0;
}
