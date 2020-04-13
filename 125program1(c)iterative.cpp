#include<iostream>
using namespace std;
int main()
{
	int i,x,y,quo,rem;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	if(y==0)
	cout<<"Divisor can't be zero"<<endl;
	while(x>=y)
	{
		x=x-y;
		rem+=1;
	}
	cout<<"Quotient is:"<<rem<<endl;
	cout<<"Remainder is:"<<x<<endl;
	return 0; 
}
