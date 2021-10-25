#include<iostream>
using namespace std;

int bsearch(int arr[],int n,int x)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high) / 2;
		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x)
			high=mid-1;
		else
			low=mid+1;
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
	
	cout<<bsearch(arr,n,x);

}