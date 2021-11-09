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

int main()
{
    CHIDORI

    int t;
    cin>>t;
    while(t--)
    {
        int n,min=INT_MAX,max=INT_MIN;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[n];
            if(arr[n]<=min)
                min=n;
            if(arr[n]>=max)
                max=n;
        }

       
    }
}