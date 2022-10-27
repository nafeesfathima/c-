#include<iostream>
using namespace std;
main()
{
	int num,fact=1,i;
	cout<<"enter the number";
	cin>>num;
	for(i=1;i<=num;i++)
	{
	fact=fact*i;
}
	cout<<"the factorial of a num is"<<fact;

}