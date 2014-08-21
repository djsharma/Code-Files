#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 
using namespace std;

struct treenode
{
int data;
struct treenode * left;
struct treenode * right;
};




treenode * insert(treenode *root,int n)
{
if(root==NULL)
{
treenode * node=(treenode *)malloc(sizeof(treenode));
node->data=n;
node->left=NULL;
node->right=NULL;
root=node;
}
	else
	{
		if(root->data > n) root->left=insert(root->left,n);
		if(root->data < n) root->right=insert(root->right,n);
 	}

return root;
}


//First Approach
treenode * lca(treenode * root,treenode * a, treenode * b)
{
if(root==NULL) return NULL;
if(root==a) return root;
if(root==b) return root;
treenode * left, * right;
left=lca(root->left,a,b);
right=lca(root->right,a,b);
if(left!=NULL && right!=NULL) return root;
	else{
		if(left!=NULL) return left;
		if(right!=NULL) return right;
	}
}

//Second Approach
treenode * lca_second(treenode *root, treenode *a, treenode *b)
{
	while(true)
	{
		if((a->data < root->data && b->data > root->data)||(a->data > root->data && b->data < root->data)) return root;
		if(a->data < root->data && b->data < root->data) {root=root->left;}
		else{if(a->data > root->data && b->data > root->data) {root=root->right;}}
	}

}





int main()
{
treenode * root=NULL;
root=insert(root,10);
root=insert(root,5);
root=insert(root,8);
root=insert(root,7);
root=insert(root,1);
root=insert(root,11);
root=insert(root,15);
root=insert(root,6);
root=insert(root,2);

treenode * temp=NULL;
//temp=lca(root,root->left->left->right,root->left->right->left);
temp=lca_second(root,root->left->left->right,root->left->right->left);
cout<<temp->data<<endl;
//cout<<root->data<<endl;
return 0;
}
