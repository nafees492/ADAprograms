//recursive procedure for binary search

#include<bits/stdc++.h> 
using namespace std; 
int binarySearch(int a[],int l,int r,int item) 
{ 
	if(r>=l) 
	{ 
		int mid=l+(r-l)/2; 
		if (a[mid]==item) 
			return mid;  
		if (a[mid]>item) 
			return binarySearch(a,l,mid-1,item); 
		return binarySearch(a,mid+1,r,item); 
	}  
	return -1; 
} 
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
	int result=binarySearch(a,0,n-1,item);
	if(result==-1)
	cout<<"element not found"<<endl;
	else
	cout<<"element found at index"<<result<<endl;
	return 0; 
} 

