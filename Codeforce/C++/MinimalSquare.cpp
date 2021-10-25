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
int Max(int a,int b)
{
    return a>b?a:b;
}
int Mix(int a,int b)
{
    return a<b?a:b;
}

int main(){
    fastread();

    int t;
    fastscan(t);
    while(t--)
    {
        int a,b,area;
        fastscan(a);
        fastscan(b);
        if(a==b)
        {
            cout<<4*a*b<<'\n';
        }else{
            if(a>b && a>=2*b){
                cout<<a*a<<'\n';
            }else if(a>b && a<2*b){
                cout<<2*b*2*b<<'\n';
            }else if(b>a && b>=2*a){
                cout<<b*b<<'\n';
            }else{
                cout<<2*a*2*a<<'\n';
            }
        }

    }
}