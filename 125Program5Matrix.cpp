#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	int p1,p2,p3,p4,p5,p6,p7;
	cout<<"enter the elements of array a"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cin>>a[i][j];
		}
	}
	cout<<"enter the elements of array b"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cin>>b[i][j];
		}
	}
	p1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	p2=(a[1][0]+a[1][1])*b[0][0];
	p3=(b[0][1]-b[1][1])*a[0][0];
	p4=(b[1][0]-b[0][0])*a[1][1];
	p5=(a[0][0]+a[0][1])*b[1][1];
	p6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
	p7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	c[0][0]=p1+p4-p5+p7;
	c[0][1]=p3+p5;
	c[1][0]=p2+p4;
	c[1][1]=p1+p3-p2+p6;
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			cout<<c[i][j];
		}
	}
}
