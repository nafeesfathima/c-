#include<iostream>
using namespace std;
main()
{
	int n,i,arr1[10],arr2[10],sum[10];
	cout<<"enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
		for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<n;i++)
	{
		sum[i]=arr1[i]*arr2[i];
	}
	for(i=0;i<n;i++)
	{
	cout<<sum[i];
	}
}