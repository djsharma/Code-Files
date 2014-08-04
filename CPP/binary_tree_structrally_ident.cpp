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


bool identical(treenode *p,treenode *q)
{
if(p==NULL && q==NULL) return true;
if(p==NULL && q!=NULL) return false;
if(p!=NULL && q==NULL) return false;
else
	{
	return (identical(p->left,q->left) && (p->data==q->data) && identical(p->right,q->right));
	}
}




	
int main()
{
treenode *root1=NULL;
treenode *root2=NULL;
insert(&root1,1);
insert(&(root1->left),2);
insert(&(root1->right),3);
insert(&(root1->left->left),4);
insert(&(root1->left->right),5);
insert(&(root1->right->left),6);
insert(&(root1->right->right),7);
insert(&(root1->right->right->left),8);
insert(&(root1->right->right->right),9);


insert(&root2,1);
insert(&(root2->left),2);
insert(&(root2->right),3);
insert(&(root2->left->left),4);
insert(&(root2->left->right),5);
insert(&(root2->right->left),6);
insert(&(root2->right->right),7);
insert(&(root2->right->right->left),8);
insert(&(root2->right->right->right),9);

cout<<identical(root1,root2);
cout<<endl;
return 0;
}





