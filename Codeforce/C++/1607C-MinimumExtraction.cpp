#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
int mininarray(vector<int> arr,int size)
{
    int min=INT_MAX;
    int flag=0;
    for (int i = 0; i < size; ++i)
    {
        if(arr[i]<min){
            min=arr[i];
            flag=i;
        }
    }
    return flag;
}

int main()
{
    CHIDORI
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        int min=mininarray(v,n);
        int x=v[min];
        while(n>1)
        {
            vector<int>::iterator it;
            it = v.begin()+min;
            v.erase(it);
            n--;

            for (int i = 0; i < n; ++i)
            {
                v[i]=v[i]-x;
            }
            if(n!=1){
                min=mininarray(v,n);
                x=v[min];
            }
        }
        cout<<x<<'\n';
    }
}