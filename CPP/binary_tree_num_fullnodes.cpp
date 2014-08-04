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


int numberfullnodes(treenode *root)
{
if(root==NULL) return 0;
int i,j;
i=numberfullnodes(root->left);
j=numberfullnodes(root->right);
if(root->left==NULL || root->right==NULL) return (i+j);
else return (i+j+1);
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
//insert(&(root->right->right->left),8);
insert(&(root->right->right->right),9);
cout<<numberfullnodes(root);
cout<<endl;
return 0;
}
