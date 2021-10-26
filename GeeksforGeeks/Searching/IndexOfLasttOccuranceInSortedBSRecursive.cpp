#include<iostream>
using namespace std;

int lastOccrance(int arr[],int low,int high,int x,int n)
{
	if(low>high)
		return -1;

	int mid=(low+high)/2;

	if(arr[mid]>x)
	{
		return lastOccrance(arr,low,mid-1,x,n);
	}
	else if(arr[mid]<x)
	{
		return lastOccrance(arr,mid+1,high,x,n);
	}
	else
	{
		if(arr[mid]!=arr[mid+1] || mid== n-1)
			return mid;
		else
			return lastOccrance(arr,mid+1,high,x,n);
	}

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
	cout<<lastOccrance(arr,0,n-1,x,n);

}