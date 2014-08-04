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



int treesize(treenode *root)
{
if(root==NULL) return 0;
return (treesize(root->left)+1+treesize(root->right));
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
cout<<treesize(root);
cout<<endl;
return 0;
}
