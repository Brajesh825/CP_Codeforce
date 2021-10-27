#include<bits/stdc++.h>
using namespace std;

#define fastscan() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastscan();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        long long power=pow(2,n);
        long long sum= n*(n+1)/2;
        long long i=0;
        if(n==1)
            cout<<1<<" "<<1<<'\n';
        else
        {
            for (i = 1; i < n; ++i)
            {
                cout<<i<<" ";
            }       
            cout<<--i<<" ";
            long long z=power-sum+1;
            cout<<z<<'\n';             
        }
    }   


}
