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
    
    int m,n;
    cin>>m>>n;

    char arr[m*n];

    for (int i = 0; i < m*n; ++i)
    {
        cin>>arr[i];
        if(arr[i]=='C' || arr[i]=='M' || arr[i]=='Y')
        {
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
}