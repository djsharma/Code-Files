#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<queue>
#include<math.h>
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

int diameter(treenode * root,int * maximum)
{
if(root==NULL) {*maximum=0;return 0;}	
int i,j;
int m,n;
i=diameter(root->left,&m); 
j=diameter(root->right,&n);
*maximum=max((i+j+1),max(m,n));
return (max(i,j)+1);
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
int p;
int a=diameter(root,&p);
cout<<"diameter:"<<p;
cout<<endl;
return 0;
}
