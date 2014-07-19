#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void merge(int a[],int b[],int left,int mid,int right);


void selection(int a[],int b[],int left,int right)
{
if(right>left){
int mid;
mid=(left+right)/2;
selection(a,b,left,mid);
selection(a,b,mid+1,right);
merge(a,b,left,mid,right);

return;
}
}

void merge(int a[],int b[],int left,int mid,int right)
{
int i,j,p;
i=left;
j=mid+1;
p=left;
	while(i<=mid && j<=right)	
	{
		if(a[i]<a[j]) {b[p]=a[i]; i++; p++;}
		else {b[p]=a[j]; j++; p++;}
	}
		while(i<=mid)	{b[p]=a[i];i++;p++;}
		while(j<=right) {b[p]=a[j];j++;p++;}
		
	for(i=0;i<=(right-left+1);i++)
	{
	a[right]=b[right];
	right--;
	}	
return;
}



int main()
{
int a[]={4,1,8,5,9,3,6,2,7,12,15,11,10};
int b[20];
int left=0;
int right=12;
selection(a,b,left,right);
for(int i=0;i<=right;i++)
cout<<a[i]<<" ";
cout<<endl;

return 0;
}
