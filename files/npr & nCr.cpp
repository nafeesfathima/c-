#include<iostream>
using namespace std;
main()
{
	int n,r,i,j,k,C,P,fact1=1,fact2=1,fact3=1;
	cout<<"enter n and r";
	cin>>n>>r;
	for(i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	for(j=1;j<=r;j++)
	{
		fact2=fact2*j;
	}
	for(k=1;k<=n-r;k++)
	{
		fact3=fact3*k;
	}
	P=fact1/fact3;
	C=fact1/(fact2*fact3);
	cout<<"the nPr of the given number is"<<P<<'\n';
	cout<<"the nCr of the given number is"<<C;
}