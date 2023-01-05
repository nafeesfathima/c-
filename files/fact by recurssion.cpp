#include<iostream>
using namespace std;
main()
{
	int f,n;
	cout<<"enter the number to finf factorial \n";
	cin>>n;
	f = fact(n);
	cout<<f;
	
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	int f=fact(n-1)
	return (n*f);
	
}