#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>

using namespace std;
vector<int> heap;
int n;


void max_heapify(int i)
{
//max heapify rule here

if(i>=n) return;
int left,right,index,temp;
left=(i<<1)+1;
right=left+1;
	
	if(left<n && heap[i]<heap[left])
		index=left;
	else
		index=i;

	
	if(right<n && heap[index]<heap[right])
		index=right;
	
	if(index!=i)
	{	
		temp=heap[index];
		heap[index]=heap[i]; 
		heap[i]=temp; 
		max_heapify(index);
	}
	
//heapify heads here		
}







void make_heap()
{
//function to create heap here

int start=n/2;
	for(int i=start;i>=0;i--)
	{
		max_heapify(i);
	}

}




void show_heap()
{
	for(int i=0;i<n;i++)
	{
	cout<<heap[i]<<" ";
	}
	
}




void delete_max()
{
	n=n-1;
	heap[0]=heap[n];
	max_heapify(0);
}





int main()
{
cin>>n;
int temp;	
for(int i=0;i<n;i++)
{
	cin>>temp;
	heap.push_back(temp);
}

make_heap();
show_heap();
cout<<endl;
delete_max();
show_heap();
	

return 0;
}

