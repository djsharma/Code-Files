#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;


int LCS(char a[],char b[])
{
int n,m;
n=strlen(a);
m=strlen(b);
int lcs[n+1][m+1];

int i=0,j=0;
	i=n;
	for(j=0;j<=m;j++)
	lcs[i][j]=0;
	
	j=m;
	for(i=0;i<=n;i++)
	lcs[i][j]=0;
	
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>=0;j--)
		{
			if(b[j]==a[i]) {lcs[i][j]=1+lcs[i+1][j+1];}
			else{
			lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);	
			}		
		}
	}
//-------------------------------print the lcs---------------------------



//-----------------------------------------------------------------------
return lcs[0][0];
}



int main()
{
char a[]="XMJYAUZ";
//"ABCBDAB";
char b[]="MZJAWXU";
//"BDCABA";
cout<<LCS(a,b);
return 0;
}
