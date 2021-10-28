#include <iostream>
using namespace std;


pair<int,int> Sum(int arr[],int size,int x)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if((arr[i]+arr[j])==x)
			{
				return make_pair(arr[i],arr[j]);
			}
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