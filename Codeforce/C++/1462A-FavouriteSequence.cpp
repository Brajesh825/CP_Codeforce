#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int arr2[n];

		for (int i = 0,j=0; i <n ; i+=2,j++)
		{
			arr2[i]=arr[j];
		}
		for (int i = 1,j=n-1; i <n ; i+=2,j--)
		{
			arr2[i]=arr[j];
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<arr2[i]<<" ";
		}
		cout<<'\n';

	}
}