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
        int l,r;
        cin>>l>>r;


        int m=(l)*2;
        if(m<=r)
            cout<<(l)<<' '<<m<<'\n';
        else
            cout<<-1<<' '<<-1<<'\n';            
    }
}