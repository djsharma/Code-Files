#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<string>

using namespace std;

int getPrecedence(char a)
{
	switch(a)
	{
	case '-': return 1;
	case '+': return 2;
	case '/': return 3;
	case '*': return 4;
	case '^': return 5;
	case '@': return 0;
	}

}



void infixToPostfix(string str)
{
stack<char> stk;
char u;
int u_pre,str_pre;
int n=str.length();
int i=0;
stk.push('@');
	while(i<n)
	{
		if(isalpha(str[i]))
			{
			cout<<str[i];
			}
		else
			{
			if(str[i]!=')' && str[i]!='(')
				{
				u=stk.top();
				u_pre=getPrecedence(u);
				str_pre=getPrecedence(str[i]);
				while(u_pre>str_pre)
					{
					cout<<stk.top();
					stk.pop();
					u=stk.top();
					u_pre=getPrecedence(u);
					}
				stk.push(str[i]);								
				}
			
			if(str[i]=='(') stk.push('(');
			
			if(str[i]==')')
				{
				u=stk.top();
				while(u!='(')
					{
					cout<<u;
					stk.pop();
					u=stk.top();
					}
				stk.pop();	
				}				
			}
	i++;
	}
	
	if(!stk.empty())
	{
	while(stk.top()!='@')
		{
		cout<<stk.top();
		stk.pop();
		}
	}
	cout<<endl;
}



int main()
{
string str;
cin>>str;

infixToPostfix(str);

return 0;
}
