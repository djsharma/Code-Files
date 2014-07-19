#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int palindrome(string str)
    {
    int flag=1;
    long int n,t;
    n=str.length();
    long int arr[26];   
    t=n;

    memset((char *)arr,0,sizeof(long int)*26);
    
    while(t--)
        {
            arr[str[t]-97]++;
        }

    t=0;
    while(t<26)
    {
    cout<<arr[t]<<" ";  
    }
    
    
    t=0;
    while(t<n)
        {
        if(arr[t]%2==0)
            {
           t++;
            continue;
        }
        else{
            if(flag!=0) {flag=0;t++;continue;}
            if(flag==0) {return 0;}
        }
        
       
    }
    
    
    
    
    return 1;
}


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    
    flag=palindrome(s);
    
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
