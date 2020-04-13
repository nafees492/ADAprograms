#include<iostream>
using namespace std;
int Fib(int N)
{
	int Fib[N+1],i;
	Fib[0]=0;
	Fib[1]=1;
	for(i=2;i<=N;i++)
	Fib[i]=Fib[i-1]+Fib[i-2];
	return Fib[N];
}
int main()
{
	int n;
	cout<<"Enter any number"<<endl;
	cin>>n;
	if(n<=1)
	cout<<n;
	else
	cout<<Fib(n);
	return 0;
}
