#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
long long n,t;//,q;
vector<long long> vec;
long long x,sum=0, max_a, accumulate = 0;//,max=-1000000000;
long long i=0,m;

scanf("%lld", &n);
t=n;
while(t--)
{
cin>>x;
accumulate = accumulate + x;
vec.push_back(x);
}
//cout << accumulate;
//for initial sum
for(size_t i = 0; i < n; i++)
  sum = sum + (i+1) * vec[i];
max_a = sum;
//cout << sum << endl;

for(size_t i = 0; i < n-1; ++i)
{
  sum =sum  - (accumulate - vec[i]) + (n-1) * vec[i];
  if(max_a < sum)
  	max_a = sum;	
}

cout << max_a;
return 0;
}


