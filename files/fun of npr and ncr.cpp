#include<iostream>
using namespace std;

void npr(int n,int r)
{
		int n,r,i,j,k,P,C,fact1,fact2,fact3;
	for(i=1;i<=n;i++)
	fact1=fact1*i;
	for(j=1;j<=r;j++)
	fact2=fact2*j;
	for(k=1;k<=n-r,k++)
	fact3=fact3*k;
	P=fact1/(fact2*fact3);
}
void ncr(int n,int r)
{
		int n,r,i,j,k,P,C,fact1,fact2,fact3;
		for(i=1;i<=n;i++)
	fact1=fact1*i;
	for(j=1;j<=r;j++)
	fact2=fact2*j;
	C=fact1/fact2;
}
main()
{
	int n,r,i,j,k,P,C,fact1,fact2,fact3;
	int npr(int n,int r);
	int ncr(int n,int r);

}