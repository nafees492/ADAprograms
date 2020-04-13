#include<iostream>
using namespace std;
int product(int x,int y,int sum)
{
	if(y==0)
		return sum;
	product(x,y-1,sum+x);
}
int main()
{
	int sum=0,i,x,y,r;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	r=product(x,y,0);
	cout<<"Product is"<<r<<endl;
	return 0;
}
