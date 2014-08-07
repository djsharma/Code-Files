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

void print(treenode *root)
{
if(root==NULL) return;
cout<<root->data<<" ";
print(root->left);
print(root->right);
}


treenode * lca(treenode * root, treenode *a, treenode *b)
{
if(root==NULL) return NULL;
if(root==a||root==b) return root;
treenode *left,*right;
left=lca(root->left,a,b);
right=lca(root->right,a,b);
if(left && right) return root;
else return (left?left:right);
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
treenode *a,*b;
a=root->right->left;
b=root->right->right->right;
cout<<lca(root,a,b)->data;
cout<<endl;
return 0;
}
