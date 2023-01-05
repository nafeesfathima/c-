#include<iostream>
using namespace std;
main()
{
	int num,i,temp;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
	temp=num%10;
	if(temp!=1 ||temp!=0)
	{
		cout<<"the given number is not binary";
	
	}
	temp=temp/10;
	if(temp==0)
	{
		cout<<"number is binary";
		}	
		

}

}