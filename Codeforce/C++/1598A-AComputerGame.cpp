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
        int n;
        cin>>n;

        string str1,str2;
        cin>>str1>>str2;

        bool flag=false;
       
        for (int j = 0; j < n; ++j)
        {
            if(str1[j]=='1' && str2[j]=='1' && j!=n-1 )
            {
                flag=true;
                break;
            }
        }

        if(flag==true)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';

    }
    
}