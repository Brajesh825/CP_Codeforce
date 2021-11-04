#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int arr[t][t]={0};

	for (int i = 0; i < t; ++i)
	{
		arr[0][i]=1;
		arr[i][0]=1;
	}

	for (int i = 1; i <t ; ++i)
	{
		for (int j = 1; j < t; ++j)
		{
			arr[i][j]=arr[i][j-1]+arr[i-1][j];
		}
	}


	cout<<arr[t-1][t-1];
}