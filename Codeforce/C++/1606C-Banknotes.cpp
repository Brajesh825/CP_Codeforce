#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define log(x) std::cout << #x"=" << x << std::endl
void fastscan(int &x)
{
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
}


int main(){
    fastread();
    int t;
    cin>>t;
    vll powers(10);
    powers[0] =1;
    for(int i=1;i<=9;i++) powers[i] = powers[i-1]*10;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vll a(n),occ(n);
        for(int i=0;i<n;i++) cin>>a[i];

        ll s = 0;

        for (int i = 0; i < n; ++i)
        {
            if(k<0) break;

            occ[i]=k+1;

            if(i!=n-1)
                occ[i]=min(occ[i],powers[a[i+1]]/powers[a[i]]-1);

            k-= occ[i];
            s+= occ[i]*powers[a[i]];
        }
        cout<<s<<'\n';
    }

}