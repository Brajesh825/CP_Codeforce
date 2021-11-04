#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

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
		ll count=0;

		for (ll i = 1; i <=9 ; ++i)
		{
			ll start=i;

			while(start<=n)
			{
				count++;
				start=start*10+i;
			}
		}

		cout<<count<<'\n';
		
	}
}