#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 
using namespace std;

struct treenode
{
int data;
struct treenode * left;
struct treenode * right;
};




treenode * insert(treenode *root,int n)
{
if(root==NULL)
{
treenode * node=(treenode *)malloc(sizeof(treenode));
node->data=n;
node->left=NULL;
node->right=NULL;
root=node;
}
	else
	{
		if(root->data > n) root->left=insert(root->right,n);
		if(root->data < n) root->right=insert(root->left,n);
 	}

return root;
}






int main()
{
treenode * root=NULL;
root=insert(root,10);
root=insert(root,5);

cout<<root->left->data<<endl;
cout<<root->data<<endl;
return 0;
}
