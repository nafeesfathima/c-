#include<iostream>
using namespace std;
main()
{
	int a[10];
	int i,n,min;
	cout<<"enter the size of the array";
	cin>>n;
	cout<<"enter the elements in array";
	for(i=0;i<n;i++)
	cin>>a[i];
	min=a[0];
	for(i=0;i<n;i++)
	{
	if(min>a[i])
	min=a[i];
	}
		cout<<"the smallest element is "<<min;
		

}