#include<iostream>
using namespace std;
void merge(int A[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],M[n2];
	for(int i=0;i<n1;i++)
	L[i]=A[p+i];
	for(int j=0;j<n2;j++)
	M[j]=A[q+1+j];
	int i=0; int j=0; int k=p;
	
	while(i<n1 && j<n2)
	{
		if(L[i]<=M[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=M[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
	A[k]=L[i];
	i++;
	k++;
	}
	while(j<n2)
	{
	A[k]=M[j];
	j++;
	k++;
}
}


void mergesort(int A[],int l,int r)
{
	if(l<r)
	
{
int mid=l+(r-1)/2;
mergesort(A,l,mid);
mergesort(A,mid+1,r);
merge(A,l,mid,r);
}
}
void print(int A[],int size)
{
	for(int i=0;i<size;i++)
	cout<<A[i]<<""<<endl;
}
main()
{
	int A[]={9,8,7,6,5,4};
	int size= sizeof(A)/sizeof(A[0]);
	mergesort(A,0,size-1);
	cout<<"sorted array";
	print(A,size);
}
