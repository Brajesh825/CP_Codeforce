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

int main()
{
    fastread();
    int m,n;
    fastscan(m);
    fastscan(n);

    int count=0;

    for (int i = 0; i < m; ++i)
    {
        int temp;
        fastscan(temp);
        if(temp<=5-n)
            count++;
    }
    cout<<(int)count/3;
}