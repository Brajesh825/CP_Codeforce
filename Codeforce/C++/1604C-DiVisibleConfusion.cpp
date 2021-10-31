#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

void DivisibleConfusion()
{
	int n,x=0;
	cin>>n;
	ll arr[n];
	for (int i=0;i<n;++i) cin>>arr[i];
	bool ok=false;

	for (int i = 0; i < n; ++i)
	{
		ll in=i+2;
		if(arr[i]%in!=0){
			x++;
		}
		else
		{
			ok=false;
			for (int j = 1; j <= x ; ++j)
			{
				if(arr[i]%(in-j)!=0){
					x++;
					ok=true;
					break;
				}
			}
			if(ok==false)
			{
				pno
				return;
			}
		}
	}
	pyes
}

int main()
{
    CHIDORI
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		DivisibleConfusion();
 	}   
}