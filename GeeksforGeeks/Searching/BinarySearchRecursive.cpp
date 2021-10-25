#include<iostream>
using namespace std;

int bsearch(int arr[],int low,int high,int x)
{
	if(low>high)
		return -1;
	int mid = (low+high)/2;

	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return bsearch(arr,low,mid-1,x);
	else
		return bsearch(arr,mid+1,high,x);
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
	
	cout<<bsearch(arr,0,n-1,x);

}