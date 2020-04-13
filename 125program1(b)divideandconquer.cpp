#include<iostream>
using namespace std;
int Mult(int x,int y)
{
	if(y==1)
	return x;
	int t=Mult(x,y/2);
	t=t+t;
	if(y%2==1)
	t=t+x;
	return t;
}
int main()
{
	int x,y,t,z;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	z=Mult(x,y);
	cout<<"product is"<<z;
	return 0;
}
