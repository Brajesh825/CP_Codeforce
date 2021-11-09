#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int Min(int a,int b)
{
    return a<b?a:b;
}
int Max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
    CHIDORI
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int i;

        int min=Min(a,b);
        int max=Max(a,b);

        for (i = 0; min<=n && max<=n ; ++i)
        {
            if(i%2==0)
                min+=max;
            else
                max+=min;
        }

        cout<<i<<'\n';
    }   
}