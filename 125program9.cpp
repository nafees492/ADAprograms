#include<iostream>
#include<cstring>
#define N 4
using namespace std;
bool isSafe(char arr[][N],int r,int c)
{   
	for(int i=0;i<r;i++)
        if(arr[i][c]=='Q')
        	return false;
	for(int i=r,j=c;i>=0 && j>=0;i--,j--)
        if(arr[i][j]=='Q')
        	return false;
    for(int i=r,j=c;i>=0 && j<N;i--,j++)
    	if(arr[i][j]=='Q')
        	return false;
        	return true;
}
void nQueen(char arr[][N],int r)
{   
    if(r==N)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
        	cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
   		return;
	}
	for(int i=0;i<N;i++)
	{
    	if(isSafe(arr,r,i))
		{ 
			arr[r][i]='Q';
 			nQueen(arr,r+1);
			arr[r][i]='-'; 
		}
    }
}
int main()
{
	char arr[N][N];
  	memset(arr,'-',sizeof arr);
  	nQueen(arr,0);
    return 0;
}
