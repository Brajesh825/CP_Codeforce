#include <iostream>
using namespace std;

#define ll long long
ll Max(ll a,ll b)
{
    return a>b?a:b;
}
#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main()
{
	CHIDORI
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		ll count=0;

		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(arr[i]>i+1)
			{
				ll temp = arr[i]-i-1;
				count=Max(count,temp);
			}
		}

		cout<<count<<'\n';

	}

}