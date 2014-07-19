#include<iostream>

using namespace std;

class someOther;

class someOne
{
int a;
public:
friend void setshow(someOne X,someOther Y);
};


class someOther
{
int b;
public:
friend void setshow(someOne X,someOther Y);
};


void setshow(someOne X,someOther Y)
{
X.a=10;
Y.b=20;
cout<<X.a<<"  "<<Y.b<<endl;
}

int main()
{
someOne str;
someOther sttr;

setshow(str,sttr);

return 0;
}
