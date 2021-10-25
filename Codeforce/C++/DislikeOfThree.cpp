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
void display(int arr[],int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
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

        int i,j;

        for (i = 0,j=1; i < n; ++i)
        {
            if(j%3==0 || j%10==3)
            {
                j++;
                i--;
            }else{
                j++;
            }
        }
        cout<<(j-1)<<'\n';

    }
}