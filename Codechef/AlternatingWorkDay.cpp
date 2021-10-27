#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a,b,p,q;
        cin>>a>>b>>p>>q;

        long long alice = p/a;
        long long bob = q/b;

        if(p%a==0 && q%b==0)
        {
            if(alice==bob || alice==bob-1 || alice==bob+1)
               cout<<"YES"<<'\n';
            else
                cout<<"No"<<'\n';            
        }
        else
        {
            cout<<"No"<<'\n';
        }


    }   

}
