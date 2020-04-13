#include<iostream>
using namespace std;
void Dfs(int);
int G[10][10],visited[10],n;
int main()
{
	int i,j;
	cout<<"Enter number of vertices"<<endl;
	cin>>n;
	cout<<"Enter Adjecency matrix of the graph:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>G[i][j];	
		}	
	} 
	for(i=0;i<n;i++)
		visited[i]=0;
	Dfs(0);
}
void Dfs(int i)
{
	int j;
	cout<<i;
	visited[i]=1;
	for(j=0;j<n;j++)
	{
		if(!visited[j] && G[i][j]==1)
			Dfs(j);
	}
}
