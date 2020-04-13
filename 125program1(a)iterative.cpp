#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,x,y;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	for(i=0;i<=y-1;i++)
	{
		sum=sum+x;
	}
	cout<<"Product is"<<sum<<endl;
	return 0;
}
