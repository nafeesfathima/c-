#include<iostream>
using namespace std;
struct cricket 
{
	char playername[20];
	char team_name[20];
	int high_score;

	
};
main()
{
	int temp,i;
	struct cricket p[10];
	for(i=1;i=10;i++)
	{
	cout<<"enter player"<<i<<" name,team name,high score";
	cin>>p[i].playername>>p[i].team_name>>p[i].high_score;
	}
	temp=p[1].high_score;
	for(i=1;i<10;i++)
	{
	if(temp<p[i].high_score)
	temp=p[i].high_score;
	cout<<"the hihghest is"<<temp;
	}

}