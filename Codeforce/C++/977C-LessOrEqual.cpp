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
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int ans=-1;

    if(k==0)
        ans=arr[0]-1;
    else
        ans=arr[k-1];

    int count=0;

    for (int i = 0; i < n; ++i)
    {
        if(arr[i]<=ans)
            count++;
    }

    if(count!=k || !(1<=ans))
        cout<<-1;
    else
        cout<<ans;
}