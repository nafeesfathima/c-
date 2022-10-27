#include<iostream>
using namespace std;
main()
{
	int num1,num2,numerator,denominator,remainder,lcm,gcd;
	cout<<"enter 2 numbers \n";
	cin>>num1>>num2;
	numerator=(num1>num2)?num1:num2;
	denominator=(num1<num2)?num1:num2;
	remainder=numerator%denominator;
	while(remainder!=0)
	{
		numerator=denominator;
		denominator=remainder;
		remainder=numerator%denominator;
	}
	gcd=denominator;
	lcm=num1*num2/gcd;
	cout<<"the lcm of the given number is "<<lcm<<'\n';
	cout<<"the gcd of the given number is"<<gcd;
	
}