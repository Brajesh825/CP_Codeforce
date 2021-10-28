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
        int a,b;
        fastscan(a);
        fastscan(b);

        int diff=b-a;
        if(diff==0)
            cout<<"0"<<'\n';
        else if(diff>0)
        {
            if(diff%2==0)
                cout<<"2"<<'\n';
            else
                cout<<'1'<<'\n';
        }
        else
        {
             if(diff%2==0)
                cout<<"1"<<'\n';
            else
                cout<<'2'<<'\n';   
        }
    }
}