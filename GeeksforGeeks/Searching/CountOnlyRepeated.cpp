#include<bits/stdc++.h>
using namespace std;


pair<int,int> Count(int arr[],int n)
{
	pair<int,int> ans(-1,-1);

	unordered_set<int> us;
	for (int i = 0; i < n; ++i)
	{
		if(us.find(arr[i]) != us.end())
		{
			ans.first = arr[i];
			if(ans.second==-1){
				ans.second=2;
			}
			else{
				ans.second++;
			}
		}else
		{
			us.insert(arr[i]);
		}
	}
	return ans;

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	pair<int,int> ans = Count(arr,n);
	cout<<ans.first<<" "<<ans.second<<"\n";

}