#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int fibo[100];

int fabonacci(int n)
{
if(fibo[n]==-1) {fibo[n]=fabonacci(n-1)+fabonacci(n-2);}
return fibo[n];
}


int main()
{
memset((char *)fibo,-1,400);
int n;
cin>>n;
fibo[0]=0;
fibo[1]=1;
cout<<fabonacci(n);
return 0;
}

