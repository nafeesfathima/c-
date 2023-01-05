#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter 3 numbers \n";
	cin>>a>>b>>c;
	swap(a,b);
	cout<<a<<"\n"<<b<<"\n"<<c;
}
void swap(int x, int y, int z)
{
	int temp=x;
	x=y;
	y=z;
	z=temp;
	cout<<"after shifting";
	
}