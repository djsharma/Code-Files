#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main()
{
union myunion{
int a;
float b;
};

myunion newunion;

float m=10.345;
newunion.a=10;
cout<<newunion.a<<endl;
newunion.b=10.345;
cout<<newunion.a<<endl;
cout<<m<<endl;
cout<<sizeof(myunion)<<":"<<sizeof(float);
return 0;
}


