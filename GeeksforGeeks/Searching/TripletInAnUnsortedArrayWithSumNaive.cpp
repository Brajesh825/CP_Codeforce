#include<iostream>
#include<tuple>
using namespace std;


tuple<int,int,int> Sum(int arr[],int size,int x)
{
	for (int i = 0; i < size-2; ++i)
	{
		for (int j = i+1; j < size-1; ++j)
		{
			for (int k = j+1; k < size; ++k)
			{
				if((arr[i]+arr[j]+arr[k])==x)
				{
					return make_tuple(arr[i],arr[j],arr[k]);
				}
			}
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