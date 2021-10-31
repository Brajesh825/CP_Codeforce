#include <iostream>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		ll count=0;

		for (int i = 0,j=0; i < n; ++i,++j)
		{
			cin>>arr[i];
			if(arr[i]>j+1){
				count+=arr[i]-j-1;
				j+=arr[i]-j-1;
			}
		}

		cout<<count<<'\n';

	}

}