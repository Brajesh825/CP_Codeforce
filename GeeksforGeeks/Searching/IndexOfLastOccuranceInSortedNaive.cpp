#include<iostream>
using namespace std;

int lastOccrance(int arr[],int n,int x)
{
	for (int i = n-1; i >= 0; --i)
	{
		if(arr[i]==x)
			return i;
	}
	return -1;
}

int main()
{
	int n,x;
	cin>>n;
	cin>>x;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<lastOccrance(arr,n,x);

}