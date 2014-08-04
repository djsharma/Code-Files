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


void reverselevel(treenode *root)
{
stack<treenode *> S;
queue<treenode *> Q;
Q.push(root);
S.push(root);
treenode * temp;
	while(!Q.empty())
	{
	temp=Q.front();
	Q.pop();	
	if(temp->right!=NULL) {S.push(temp->right);Q.push(temp->right);}
	if(temp->left!=NULL) {S.push(temp->left);Q.push(temp->left);}
	} 
	
	while(!S.empty())
	{
	cout<<S.top()->data<<" ";
	S.pop();
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
reverselevel(root);
cout<<endl;
return 0;
}
