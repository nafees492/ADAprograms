#include<iostream>
using namespace std;
int result[100]={0};
int fact(int n)
{
	if(n>=0)
	{
		result[0]=1;
		for(int i=1;i<=n;i++)
		{
			result[i]=i*result[i-1];
		}
		return result[n];
	}
}
int main()
{
	int n;
	cout<<"Enter any number"<<endl;
	cin>>n;
	if (n==0)
	return 0;
	
	cout<<fact(n);
}
