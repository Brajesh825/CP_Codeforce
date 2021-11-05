#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
int charToInt(char ch)
{
    return (int)ch-97+1;
}


int main()
{
    CHIDORI
    
    int t;
    cin>>t;
    while(t--)
    {
        string z;
        cin>>z;

        sort(z.begin(),z.end());        

        int sum=0;
        for (int i = 0; i < (int)z.length(); ++i)
        {
            sum+=(i+1)*(charToInt(z[i]));
        }
        cout<<sum<<'\n';
    }
}
