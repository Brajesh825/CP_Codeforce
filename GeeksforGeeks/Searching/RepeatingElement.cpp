#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int arr[],int n)
{
	bool visited[n-1]={0};

	for (int i = 0; i < n; ++i)
	{
		if(visited[arr[i]]==1)
			return arr[i];
		else
			visited[arr[i]]=1;
	}
	return -1;

}
int main()
{
	int arr[] = {0,2,1,3,2,2};
	cout<<repeatingElement(arr,6);

}