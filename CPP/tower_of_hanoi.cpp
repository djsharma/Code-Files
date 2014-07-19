#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


void towerOfHanoi(int n,char A,char B,char C)
{


if(n==1)
{
cout<<"move"<<A<<"->"<<B<<endl;
return;
	
}
towerOfHanoi(n-1,A,C,B);
cout<<"move"<<A<<"->"<<B<<endl;
towerOfHanoi(n-1,C,B,A);

}




int main()
{
int n;
cin>>n;

towerOfHanoi(n,'A','B','C');

return 0;
}



