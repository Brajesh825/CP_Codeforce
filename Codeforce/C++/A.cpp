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
    ll t;
    cin>>t;
    while(t--)
    {
        ll z;
        cin>>z;

        ll sum=0;
        if(z==0)
        {
            cout<<sum<<'\n';
            continue;
        }else{
            ll n=1;
            for (ll i = 0; i < z; ++i)
            {
                if(i%2==0)
                    sum+=3;
                else
                    sum-=1;
            }
            cout<<sum<<'\n';
        }
    }
    
}