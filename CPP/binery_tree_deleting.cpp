/*print the nodes in reverse level order*/
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


treenode * deletetree(treenode * root)
{
if(root->left==NULL && root->right==NULL) {delete(root);return NULL;}
deletetree(root->left);
deletetree(root->right);
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
root=deletetree(root);
if(root==NULL) cout<<"tree deleted";
cout<<endl;
return 0;
}
