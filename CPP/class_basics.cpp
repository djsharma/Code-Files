#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class item
{
int data;
static int count;
void getdata(int a);

public:

void putdata();
void setdata(int b);
static void show()
{cout<<count<<endl;}
};

int item::count;

void item::getdata(int a)
{
data=a;
count++;
}

void item::putdata()
{
cout<<data<<endl<<count<<endl;
}

void item::setdata(int b)
{
getdata(b);
}




int main()
{

item obj;
item obj2;
obj.setdata(10);
obj2.setdata(10);

obj.putdata();

item::show();

return 0;
}
