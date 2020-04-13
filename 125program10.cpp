#include<iostream>
using namespace std;
int G[50][50], V[50];
int next_color(int k)
{
	int i,j;
	x[k]=1;
	for(i=0;i<k;i++)
	{
		if(G[i][k]!=0 && x[k]==x[i])
			x[k]=x[i]+1;
	}
}
int main()
{
	int x,e,i,j,k,l,n;
	cout<<"Enter the no of Vertex"<<endl;
	cin>>n;
	cout<<"Enter the no of edges"<<endl;
	cin>>e;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			G[i][j]=0;
		}
	}
	cout<<"Enter value"<<endl;
	for(i=0;i<e;i++)
	{
		cin>>k>>l;
		G[k][l]=1;
		G[l][k]=1;
	}
	for(i=0;i<n;i++)
		next_color(i);
	cout<<"Color of V:"<<endl;
	for(i=0;i<n;i++)
		cout<<"Vertex"<<x[i];
	return 0;
}
