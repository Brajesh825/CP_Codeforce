#include <bits/stdc++.h> 
using namespace std;


pair<int,int> Sum(int arr[],int size,int x)
{
	
	unordered_set<int> s;
	for (int i = 0; i < size; ++i)
	{
		int temp = x-arr[i];
		if(s.find(temp) != s.end())
			return make_pair(arr[i],temp);
		s.insert(arr[i]);
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