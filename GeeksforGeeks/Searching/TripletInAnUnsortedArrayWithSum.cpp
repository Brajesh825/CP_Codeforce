#include<iostream>
#include<tuple>
using namespace std;


tuple<int,int,int> Sum(int arr[],int size,int x)
{
	int l,r;
	sort(arr,arr+size);
	for (int i = 0; i < size-2; ++i)
	{
		l=i+1;
		r=size-1;

		while(l<r){
			if(arr[i]+arr[l]+arr[r]==x)
				return make_tuple(arr[i],arr[l],arr[r]);
			else if(arr[i]+arr[l]+arr[r]<x)
				i++;
			else
				r--;
		}
	}
	return make_tuple(-1,-1,-1);
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

	tuple<int,int,int> p=Sum(arr,n,x);
	cout<<get<0>(p)<<" "<<get<1>(p)<<" "<<get<2>(p);


}