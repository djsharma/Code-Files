#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string>

using namespace std;


/*int testpattern(int n,string str[])
{
string pattern,patternUS;
getline(cin,pattern);
int i=0,r=0,data=0;
	
	while(pattern[i]!='\0')
	{
	if(pattern[i]!='o') {patternUS[r]=pattern[i];i++;r++;}
	else{
	patternUS[r]=pattern[i];
	r++;i++;
		if(pattern[i]=='u'&&pattern[i+1]=='r') {patternUS[r]=pattern[i+1];i=i+2;r++;}
	}
	
	}
	patternUS[r]='\0';


cout<<patternUS<<endl;

i=0;r=0;
string temp;

/*	
	while(i<n)
	{
		while(str[i][r]!='\0')
		{
			int j=0;
			while(str[i][r]!=' ' && str[i][r]!='\0')
			{
			temp[j]=str[i][r];
			j++;r++;
			}	
			temp[j]='\0';
			if(temp.compare(patternUS)==0 || temp.compare(pattern)==0) data++;
		}
	r=0;
	i++;
	}





return data;
}*/



int main()
{


string pattern,patternUS;
getline(cin,pattern);
//cout<<pattern<<endl;
int i=0,r=0,data=0;
	
	while(pattern[i]!='\0')
	{
	if(pattern[i]!='o') {patternUS[r]=pattern[i];cout<<patternUS[r];i++;r++;}
	else{
	patternUS[r]=pattern[i];
	cout<<patternUS[r];
	r++;i++;
		if(pattern[i]=='u'&&pattern[i+1]=='r') {patternUS[r]=pattern[i+1];cout<<patternUS[r];i=i+2;r++;}
	    }
	
	}
	
	//cout<<r<<endl;
	//patternUS[r]='\0';

	cout<<patternUS;




/*
int n;
cin>>n;

string str[20];
getchar();

for(int i=0;i<n;i++)
{
getline(cin,str[i]);
}

int test,data;
cin>>test;
getchar();


while(test--)
{
data=testpattern(n,str);
cout<<data<<endl;
}
*/

return 0;
}
