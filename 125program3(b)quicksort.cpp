#include<iostream>
using namespace std;
void swap(int *a,int *b)  
{  
    int t=*a;  
    *a=*b;  
    *b=t; 
}
int partition(int a[],int start,int end)
{
	int pivot=a[end];
	int pi=start-1;
	for(int i=start;i<end;i++)
	{
		if(a[i]<pivot)
		{
			swap(a[i],a[++pi]);
		}
	}
	swap(a[++pi],a[end]);
	return pi;
}
void quicksort(int a[],int start,int end)
{
	if(start<end)
	{
		int pi=partition(a,start,end);
		quicksort(a,start,pi-1);
		quicksort(a,pi-1,end);
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[100],n,i;
	cout<<"Enter the size"<<endl;
	cin>>n;
	cout<<"Enter elements:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	print(a,n);
	return 0;
}
