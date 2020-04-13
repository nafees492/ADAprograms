#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,size;
void heapify(int i,int a[])
{
	int l=2*i+1;
	int r=2*i+2;
	int max=i;
	if(l<=size && a[l]>a[max])
	max=l;
	if(r<=size&&a[r]>a[max])
	max=r;
	if(i!=max)
	{
		swap(a[max],a[i]);
		heapify(max,a);
	}
}
void buildheap(int a[])
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(i,a);
	}
}
void heap(int a[])
{
 buildheap(a);
 while(size>=1)
 {
 	swap(a[0],a[size]);
 	size--;
 	heapify(0,a);
 }
}
int main()
{
	int a[n],i,l;
	cout<<"size"<<endl;
	cin>>n;
     size=n-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
   heap(a);	
   for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
