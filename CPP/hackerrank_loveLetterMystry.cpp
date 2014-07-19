#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

 
int findOperation(string str)
    {
    int sum=0,diff=0,length;
    length=str.length();
    int end,i=0;
    end=length/2;
    while(i<end)
        {
        sum=sum+abs(str[i]-str[length-1-i]);
        i++;
    }
 return sum;   
}


int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int d;
        d=findOperation(str);
        cout<<d<<endl;
    }
   
}

