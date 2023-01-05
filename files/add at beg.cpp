#include<iostream>
using namespace std;
struct node
{
	int data, n;
	struct node*next;
	
};
node getnode()
{
	int* nn=(int*)malloc(sizeof(struct node));
	if(nn==NULL)
	cout<<"memory not allocated";
	return(node);
}
node readdetails(node,int nn)
{
	cin>>nn->data;
	nn->next=NULL;
	return nn;
}
struct node*addbeg(struct node*head, int n)
{
	struct node*nn;
		nn = getnode();
		nn=readdeatails(nn);
		if(head==NULL)
		{
		head=nn;
		return(head)
		}
		else
		{
			nn->next=head;
			head==nn;
			return head;
		}
};

int main()
{
	struct node*head=NULL;
 	cout<<" Add at the begining";
	addbeg(head);
}
