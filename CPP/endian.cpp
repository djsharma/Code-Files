#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

//little endian machine output 67452301


int main()
{
//---------------FIRST WAY------------------------
int a;
a=0X01234567;
printf("%.2x",a);
cout<<endl;

char *p;
p=(char *)&a;
for(int i=0;i<sizeof(a);i++)
{
printf("%.2x",p[i]);
}

cout<<endl;
//---------------SECOND WAY------------------------
int t=1;
char *c=(char *)&t;
if(*c)
  { cout<<"little endian"<<endl;}
  
else{cout<<"big endian"<<endl;}  
return 0;
}

