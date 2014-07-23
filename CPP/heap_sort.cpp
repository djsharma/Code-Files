#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

class heapsort
{
vector<int> heap;
int n;
int size;
void heapify(int i,char type);
void delete_heap(char type); 
bool compare(int i,int j,char type);
public:
void heap_sort(char type);
void show_heap();
void get_data(int t);
};


void heapsort::show_heap()
{
	for(int i=0;i<n;i++)
	cout<<heap[i]<<" ";
	cout<<endl;
}


void heapsort::heap_sort(char type)
{
	size=n;
	for(int i=n/2;i>=0;i--)
	heapify(i,type);
	
	for(int i=0;i<n;i++)
	delete_heap(type);
}


void heapsort::delete_heap(char type)
{
	size=size-1;
	int temp;
		temp=heap[0]; heap[0]=heap[size]; heap[size]=temp;
	heapify(0,type);
}


bool heapsort::compare(int i,int j,char type)
{
	bool flag=false;
	switch(type)
	{
	case 'i': (i>j)?flag=true : flag=false;
		  return flag;
	case 'd': (i<j)?flag=true : flag=false;
	}	  return flag;
}


void heapsort::heapify(int i,char type)
{
	if(i>=size) return;
	int left,right;
	left=(i<<1)+1;
	right=left+1;
	int index;
		
	if(left<size && compare(heap[left],heap[i],type))
		index=left;
	else
		index=i;
	
	if(right<size && compare(heap[right],heap[index],type))
		index=right;
		
	if(index!=i)
	{
		int temp;
		temp=heap[i]; heap[i]=heap[index]; heap[index]=temp;
		heapify(index,type);
	}
}




void heapsort::get_data(int t)
{
	n=t;
	int temp;
	for(int i=0;i<t;i++)
	{
	cin>>temp;
	heap.push_back(temp);
	}
}


int main()
{
int a;
cin>>a;
heapsort obj;
obj.get_data(a);
obj.heap_sort('d'); // insert i for increasing sort and d for decreasing sort
obj.show_heap();
return 0;
}
