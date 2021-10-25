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
        int ans = 1, w = 0, h = 0, n = 0;

        fastscan(w);
        fastscan(h);
        fastscan(n);

        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        while(w % 2 == 0){
            ans *= 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            ans *= 2;
            h = h / 2;
        }
        if( n <= ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
