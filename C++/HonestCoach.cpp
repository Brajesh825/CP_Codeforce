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
        for (int i = 0; i < n; ++i)
        {
            fastscan(arr[i]);   
        }
        sort(arr,arr+n);
        int min=INT_MAX;
        for (int i = 0; i < n-1; ++i)
        {
            if(arr[i+1]-arr[i]<min)
            {
                min=arr[i+1]-arr[i];
            }
        }
        cout<<min<<'\n';
    }
}