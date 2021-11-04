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

    ll n;
    cin>>n;

    int count=0;
    for (int i = 1; i <= n/2; ++i)
    {
        int x=i;
        int y=n-i;

        if(y%x==0)
            count++;
    }
    cout<<count<<'\n';
    
}
