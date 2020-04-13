#include<iostream>
using namespace std;
int main()
{
	int sum=1,i,x,y;
	cout<<"Enter the BASE VALUE"<<endl;
	cin>>x;
	cout<<"Enter the POWER VALUE"<<endl;
	cin>>y;
	for(i=0;i<=y-1;i++)
	{
		sum=sum*x;
	}
	cout<<x<<" to the power "<<y<<" is "<<sum<<endl;
	return 0;
}
