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
        int m=arr[0];
        int countN=0;

        for (int i = 1; i < n; ++i)
        {
            if(arr[i]==m)
            {
                countN++;
                if(countN>0)
                    break;
            }
        }
        if(countN>0){
             int valid=m;
            for (int i = 0; i < n; ++i)
            {
                if(arr[i]!=valid)
                {
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }
        else{
            int invalid=m;
            for (int i = 0; i < n; ++i)
            {
                if(arr[i]==invalid)
                {
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }


    }
}