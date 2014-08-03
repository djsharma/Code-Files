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


/*
void traverse(treenode * root)
{
if(root==NULL) return;
cout<<root->data<<" ";
traverse(root->left);
traverse(root->right);
}
*/

void insert(treenode **root,int val)
{

treenode *temp=(treenode *)malloc(sizeof(treenode));
temp->data=val;
temp->left=NULL;
temp->right=NULL;
*root=temp;
}


/*
void find(treenode *root,int val)
{
if(root==NULL) return;
if(root->data==val) {cout<<"found"<<endl;return;}
//cout<<root->data<<" ";
find(root->left,val);
find(root->right,val);
}

*/


void iterative_preorder(treenode * root)
{
stack<treenode *> stk;
if(root==NULL) return;
stk.push(root);
	while(!stk.empty())	
	{
	treenode * temp;
	temp=stk.top();
	stk.pop();
	cout<<temp->data<<" ";
	if(temp->right!=NULL) stk.push(temp->right);
	if(temp->left!=NULL) stk.push(temp->left);
	}
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
//traverse(root);
//find(root,3);
iterative_preorder(root);
cout<<endl;
return 0;
}
