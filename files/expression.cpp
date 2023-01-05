#include<iostream>
using namespace std;
char stack[100];
int top=-1;
void push(char x)
{
	stack[++top]=x;
		
}
char pop()
{
	if(top==-1)
	return-1;
	else
	return stack[top--];
}
main()
{
	char exp[20];
	char*e;
	int n1,n2,n3,num;
	cin>>exp;
	e=exp;
	while(*e!='\o')
	{
		if(isdigit(*e))
		{
		num=*e-48;
		push(num);
		}
		else
		 if (*e=='(')
		push(num);
		else if(*e==')')
		push(num);
		else
		{
			num=pop();
			switch(*e)
			{
			case'+': n3=n1+n2;
			break;
			case'-':n3=n1-n2;
			break;
			case'*':n3=n1*n2;
			break;
			case'/':n3=n1/n2;
			break;
			push(n3);
				
			}
			e++;
			}
			}
			cout<<"result= "<<pop();
				
}

