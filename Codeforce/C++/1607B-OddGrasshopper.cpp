#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL));
void display(int arr[],int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int main() {
   CHIDORI

    ll t;
    cin >> t;
    while(t--)
    {
        ll initial,jumps;
        cin >> initial >>jumps;
        vll v;
        long long current=initial;
        for(ll i = 0 ; i < 4 ; i++) 
        {
            ll minimum=i+1;
            if(current&1)
            {
                current+=minimum;
            }
            else
            {
                current-=minimum;
            }
            v.push_back(current);
        }
        ll z = jumps%4;

        if(z==2 or z==0)
        {
            if(z==0)
            {
                z+=4;
            }
            cout << v[z-1] << '\n';
        }
        else
        {
            if(z!=1)
             {
                jumps--;
                ll y = jumps/4.0f;

                if(initial&1)
                {
                    cout << v[z-1]-y*4 << '\n';
                }
                else
                {
                    cout << v[z-1]+y*4 << '\n';
                }
            }
            else
            {
                jumps--;
                long long y = jumps/4.0f;
                if(initial&1)
                {
                    cout << v[z-1]+y*4 << '\n';
                }
                else
                {
                    cout << v[z-1]-y*4 << '\n';
                }
                
            }
        }
    }
    
}
