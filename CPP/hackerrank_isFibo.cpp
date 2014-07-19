#include<iostream>
#include<string>
using namespace std;

void inc_order(long long int input[],long long int maintain[],int n)
{
//cout<<input[0];
long long int temp=0;
//bubble sort inc sort
for(int i=0;i<n;i++)
 for(int j=0;j<n-i-1;j++)
	{
		if(input[j]>input[j+1])	
		{
		//swap
		temp=input[j];
		input[j]=input[j+1];		
		input[j+1]=temp;
		temp=maintain[j];
		maintain[j]=maintain[j+1];		
		maintain[j+1]=temp;
		}	
			

	}
}



int main()
{
int n;
//do take input and go for bubble sort first
long long int input[100000];
long long int maintain[100000];
long long int output[100000];
cin>>n;


for(int k=0;k<n;k++)
{
cin>>input[k];
output[k]=0;
maintain[k]=k;
}

//cout<<input[0]<<endl;
//sort the input in increasing order

inc_order(input,maintain,n);

//for(int i=0;i<n;i++)
//cout<<input[i]<<endl;

int i=0;

long long int f1,f2,f3;
f1=0;
f2=1;
f3=1;
	

//serious fault in logic
	while(i<n)
	{
		if(f3==input[i])
		{
		output[i]=1;
		i++;			
		}		
		else{
			if(f3>input[i])
			{
			i++;
			}
			else{
				if(f3<input[i])
				{	
					while(f3<input[i])			
					{
					
					f1=f2;
					f2=f3;
					f3=f1+f2;					
					}	
			
				}
			    }	
		}
		
	}

inc_order(maintain,output,n);

//-------------------------------------------------------------------------------

for(int k=0;k<n;k++)
{
	if(output[k]==1)
	{
	cout<<"IsFibo"<<endl;
	}
	else
	{
	cout<<"IsNotFibo"<<endl;
	}

}



return 0;
}


//10000000000
