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



bool check(treenode * root, int min,int max)
{
if(root==NULL) return true;
int data=root->data;
if(data<min || data>max) return false;
return (check(root->left,min,max-1) && check(root->right,min+1,max));
}






int main()
{
treenode * root=NULL;
root=insert(root,10);
root=insert(root,5);
root=insert(root,6);
root=insert(root,8);
root=insert(root,3);
root=insert(root,1);

if(check(root,0,100)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
//cout<<root->left->data<<endl;
//cout<<root->data<<endl;
return 0;
}
