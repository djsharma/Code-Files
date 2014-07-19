#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class sum
{
int data;
public:
void sumdata(sum t, sum p);
void setdata(int a);
void show()
{
cout<<data<<endl;
}
};

void sum::sumdata(sum t,sum p)
{
data=t.data+p.data;
}


void sum::setdata(int a)
{
data=a;
}


int main()
{
sum t1;
t1.setdata(3);

sum t2;
t2.setdata(3);

sum t3;
t3.sumdata(t1,t2);
t3.show();


return 0;
}
