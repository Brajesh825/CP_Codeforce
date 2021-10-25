#include<iostream>
using namespace std;

int firstOccrance(int arr[],int n,int x)
{
	for (int i = 0; i < n; ++i)
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
	cout<<firstOccrance(arr,n,x);

}