#include<iostream>
using namespace std;
main()
{
	int num,temp,digit,sum=0;
	cout<<"enter the number";
	cin>>num;
	if(temp=num;temp!=0)
	{
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp%10;
	}
	if(sum==num)
	cout<<"the given num is armstrong number";
	else
	cout<<"the  given number is not armstrong number";
}
