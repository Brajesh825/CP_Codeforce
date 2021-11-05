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
    ll t;
    cin>>t;
    while(t--)
    {
        string alphabets,str;
        cin>>alphabets;
        cin>>str;
        int arr[str.length()];

        for(int i=0;i<str.length();i++)
        {
            for (int j = 0; j < 26; ++j)
            {
                if(str[i]==alphabets[j])
                {
                     arr[i]=j;
                }
            }
        }  
        int time=0;
        for (int i = 0; i < str.length()-1; ++i)
        {
            if(arr[i]>arr[i+1]){
                time+=arr[i]-arr[i+1];
            }else
            {
                time+=arr[i+1]-arr[i];
            }
        }
        cout<<time<<'\n';
    }
}
