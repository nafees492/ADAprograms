//recursive procedure for linear search
#include<iostream>
using namespace std;
int linear(int a[],int n,int i,int item)
{
		if (a[i]==item)
		{
			return i;
		}
		if(i==n)
		{
			return -1;
		}
	linear(a,n,++i,item);
}

int main()
{
	int a[50],i,r,item,n;
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to search in an array"<<endl;
	cin>>item;
	r=linear(a,n,i,item);
	if(r==-1)
	cout<<"not found"<<endl;
	else
	cout<<"found"<<endl;
}
