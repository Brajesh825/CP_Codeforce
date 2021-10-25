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
    int n;
    fastscan(n);

    while(n--)
    {
        int x;
        fastscan(x);
        if(x<4 || (x/2)%2==1)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            int arr[x];
            for (int i = 0; i < x/2; ++i)
            {
                arr[i]=(i+1)*2;
            }
            for (int i = x/2,j=1; i < x-1; ++i,j+=2)
            {
                arr[i]= j;
            }
            arr[x-1]=arr[x/2-1]+x/2-1;
            
            cout<<"YES"<<'\n';
            for (int i = 0; i < x; ++i)
            {
                cout<<arr[i]<<" ";
            }
            cout<<'\n';
        }

    }
}