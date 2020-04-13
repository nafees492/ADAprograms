//iterative procedure for linear search
#include<iostream>
using namespace std;
int main()
{
	int a[50],i,item,n;
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to search in an array"<<endl;
	cin>>item;
	for(i=0;i<n;i++)
	{
		if (a[i]==item)
		{
			cout<<"Element found"<<endl;
		}
	}
	return 0;
} 
