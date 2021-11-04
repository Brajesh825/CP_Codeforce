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

    while(t--){
        vector<int> a(3);
        cin>>a[0]>>a[1]>>a[2];
 
        sort(a.begin(),a.end());
        if(a[1] == a[2])
        {
            cout<<"YES\n";
            cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<"\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}