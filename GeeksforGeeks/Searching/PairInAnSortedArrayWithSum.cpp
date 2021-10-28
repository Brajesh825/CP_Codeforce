#include <bits/stdc++.h> 
using namespace std;


pair<int,int> Sum(int arr[],int size,int x)
{
	int low=0;
	int high=size-1;

	while(low<high)
	{
		if(arr[low]+arr[high]==x){
			return make_pair(arr[low],arr[high]);
		}
		else if(arr[low]+arr[high]<x){
			low++;
		}else{
			high--;
		}
	}

	return make_pair(-1,-1);
}

int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	pair<int,int> p=Sum(arr,n,x);
	cout<<p.first<<" "<<p.second;


}