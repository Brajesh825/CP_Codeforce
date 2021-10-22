#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

void fastscan(int &x)
{
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
}
int main()
{
    fastread();
    int t;
    fastscan(t);
    while(t--)
    {
        int n;
        fastscan(n);
        int arr[n];
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
            fastscan(arr[i]);   
            sum+=arr[i];
        }
        if(sum%2==1)
        {
            cout<<"NO"<<'\n';
        }else if(sum%2==0){
            if(n%2==0)
                cout<<"YES"<<'\n';
            else if(n%2==1)
            {
                if(sum%n==0)
                    cout<<"NO"<<'\n';
                else
                    cout<<"YES"<<'\n';
            }
        }
    }
}