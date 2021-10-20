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
    while(t--) {
        int n;
        fastscan(n);
        int x=10*(n%10-1);

        int sum=0;
        if(n>1000)
            sum=10;
        else if(n>100)
            sum=6;
        else if(n>10)
            sum=3;
        else
            sum=1;

        cout<<x+sum<<'\n';
    }
}