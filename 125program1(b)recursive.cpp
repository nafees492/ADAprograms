#include<iostream>
using namespace std;
int product(int x,int y)
{
	if(y==1)
		return x;
	return x*product(x,y-1);
}
int main()
{
	int x,y,r;
	cout<<"Enter the BASE VALUE"<<endl;
	cin>>x;
	cout<<"Enter the POWER VALUE"<<endl;
	cin>>y;
	r=product(x,y);
	cout<<x<<" to the power "<<y<<" is "<<r<<endl;
	return 0;
}
