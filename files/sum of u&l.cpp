#include<iostream>
using namespace std;
main()
{
	int i,num,sum=0;
	for(i=100;i<=200;i++)
	{
		if(i%3==0 || i%5==0)
		i++;
		else
		sum=sum+i;
	}
	cout<<"the numbers of sum between 100 and 200 which are not divisible by 3 or 5 is "<<sum;
	
}