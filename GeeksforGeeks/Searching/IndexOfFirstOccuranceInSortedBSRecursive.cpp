#include<iostream>
using namespace std;

int firstOccrance(int arr[],int low,int high,int x)
{
	if(low>high)
		return -1;

	int mid=(low+high)/2;

	if(arr[mid]>x)
	{
		return firstOccrance(arr,low,mid-1,x);
	}
	else if(arr[mid]<x)
	{
		return firstOccrance(arr,mid+1,high,x);
	}
	else
	{
		if(arr[mid]!=arr[mid-1] || mid==0)
			return mid;
		else
			return firstOccrance(arr,low,mid-1,x);
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
	cout<<firstOccrance(arr,0,n-1,x);

}