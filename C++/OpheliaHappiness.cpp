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
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        if(ch=='R')
        {
            int temp;
            cin>>temp;
            sum+=temp;
        }else if(ch=='T')
        {
            cout<<sum<<'\n';
        }

    }    
}