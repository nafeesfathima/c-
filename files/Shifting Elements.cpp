#include<iostream>
using namespace std;
main()
{
	int a[3],shift,i,j;
	
	cout<<"enter 3 elements";
	for(i=0;i<=2;i++)
	cin>>a[i];

	while(j>=0 && i>=0)
	{
		a[i]=a[j];
		j--;
		i--;
	}

	a[i]=shift;
	cout<<"the shifted array is \n";
	for(j=0;i<2;j++)
	cout<<a[j];
	

}