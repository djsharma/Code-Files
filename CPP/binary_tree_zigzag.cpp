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


void zigzag(treenode * root)
{

stack<treenode *> stcurrent,stnew;

if(!root) return;
cout<<root->data<<" "; 
stcurrent.push(root);
bool lr=false;
	while(!stcurrent.empty())
	{
		while(!stcurrent.empty())
		{
		treenode *node=stcurrent.top();
		stcurrent.pop();
		if(lr) 
		{
		if(node->left) {cout<<node->left->data<<" "; stnew.push(node->left);} 
		if(node->right) {cout<<node->right->data<<" "; stnew.push(node->right);}
		}
		else {
			if(node->right) {cout<<node->right->data<<" "; stnew.push(node->right);} 
		      	if(node->left) {cout<<node->left->data<<" "; stnew.push(node->left);}
		     }
		}
		
		lr=lr^true;
		swap(stnew,stcurrent);		
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
insert(&(root->right->right->left),8);
insert(&(root->right->right->right),9);
zigzag(root);
cout<<endl;
return 0;
}
