#include<iostream>
using namespace std;
int ternarySearch(int l,int r,int key,int a[])
{
	while(r>=l)
	{
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;
		if(a[mid1]==key)
		{
			return mid1;
		}
		if(a[mid2]==key)
		{
			return mid2;
		}
		if(key<a[mid1])
		{
			r=mid1-1;
		}
		else if(key>a[mid2])
		{
			l=mid2+1;
		}
		else
		{
			l=mid1+1;
			r=mid2-1;
		}
	}
	return -1;
}
int main()
{
	int l,r,p,key,a[100],i,n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	l=0;
	r=n-1;
	cout<<"Enter key"<<endl;
	cin>>key;
	p=ternarySearch(l,r,key,a);
	cout<<"Index of "<<key<<" is "<<p<<endl;
	return 0;
}
