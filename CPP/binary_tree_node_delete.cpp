/*not yet completed... to be done*/
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



treenode *deepest(treenode * root,int i,int *maxlevel)
{
treenode * result1, *result2;
if(root==NULL) {*maxlevel=-1;return NULL;};
int maxlv1, maxlv2;
result1=deepest(root->left,i+1,&maxlv1);
result2=deepest(root->right,i+1,&maxlv2);
	if(maxlv1==-1 && maxlv2==-1)
	{*maxlevel=i; return root;}
	else
	{
		if(maxlv1>=maxlv2)
		{*maxlevel=maxlv1; return result1;}
		else
		{*maxlevel=maxlv2;return result2;}	
	}
}


treenode * find(treenode *root, int data, int *point)
{
if(root==NULL) return NULL;
if(root->data==data) return 
}




void nodedelete(treenode *root,int data)
{


}





	
int main()
{
treenode *root=NULL;

insert(&root,1);
insert(&(root->left),2);
insert(&(root->right),3);
insert(&(root->left->left),4);
insert(&(root->left->right),5);
insert(&(root->right->left),6);
insert(&(root->right->right),7);
insert(&(root->right->right->right),11);
insert(&(root->right->right->right->left),12);


return 0;
}
