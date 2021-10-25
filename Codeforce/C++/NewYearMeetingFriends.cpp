#include<iostream>
#include <math.h>
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

int modulo(int n){
    return n>0?n:-n;
}
int maxofThree(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main()
{
    fastread();
    int n,m,o;
    fastscan(n);
    fastscan(m);
    fastscan(o);

    int mpt=(n+m+o)/3;

    int minTotDist= modulo(mpt-n) + modulo(mpt-m) + modulo(mpt-o);
    int max=maxofThree(n,m,o);

    for (int i = 1; i <=max ; ++i)
    {
        int temp=modulo(i-n) + modulo(i-m) + modulo(i-o);
        if(temp<minTotDist)
            minTotDist=temp;
    }
    cout<<minTotDist;
}