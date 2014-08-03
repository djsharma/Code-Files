#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct TrieNode{
char data;
bool eos;
struct TrieNode * child[26];
};



void insert(struct TrieNode * root, char * word)
{
if(word[0]=='\0') return;
	
	if(!root)
	{
	TrieNode * temp,*point;
	temp=root;
	int i=0;
	while(temp!=NULL && word[i]!='\0')
		{
		point=temp;
		temp=temp->child[word[i]-97];
		i++;				
		}
			
	if(word[i]=='\0'){point->eos=true;}
	if(temp==NULL && word[i]!='\0')	
		{
			while(word[i]!='\0')
			{
			temp = (TrieNode *)malloc(sizeof(TrieNode));
			for(int j=0;j<26;j++)
			temp->child[j]=NULL;
			point->child[word[i]-97]=temp;
			point=temp;
			i++;
			}
			point->eos=true;
		}
	}

	else//root empty
	{
	int i=0;
	TrieNode *point,*temp;
	temp = (TrieNode *)malloc(sizeof(TrieNode));
	for(int j=0;j<26;j++)
	temp->child[j]=NULL;
	root=temp;
	point=temp;
	i++;
			while(word[i]!='\0')
			{
			temp = (TrieNode *)malloc(sizeof(TrieNode));
			for(int j=0;j<26;j++)
			temp->child[j]=NULL;
			point->child[word[i]-97]=temp;
			point=temp;
			i++;
			}
			point->eos=true;
	}



}// insert end

void search(TrieNode * root, char * word)
{
int i=0;
	if(word[i]=='\0') return;
	if(root==NULL) {cout<<"trie empty"; return;}
	TrieNode *temp;
	temp=root;
	while(temp)
	{}

}





int main()
{
char word[]="hello";
TrieNode * root;
insert(root,word);
return 0;
}
