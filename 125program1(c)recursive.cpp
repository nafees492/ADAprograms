#include<iostream>
using namespace std;
int divide(int x,int y)
{
	if(x<y)
	cout<<"Remainder is:"<<x<<endl;
	else
	return (1+divide(x-y,y));	
}
int main()
{
	int x,y,a;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	a=divide(x,y);
	cout<<"Quotient is:"<<a;
	return 0;
}

