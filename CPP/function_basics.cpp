#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}

/*
void swap(int &a,int &b)
{
int t;
t=a;
a=b;
b=t;
}
*/


int & max(int &a,int &b)
{
if(a>b) return a;
else b;
}

inline int square(int &a)
{
return a*a;
}




int main()
{
int n=10,m=100;
//swap(&n,&m);//call by pointers

//swap(n,m); //call by refrence
//max(n,m)=-1;
n=square(n);
cout<<n<<" "<<m<<endl;
return 0;
}
