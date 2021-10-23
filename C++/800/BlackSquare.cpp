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
    int arr[4];
    for (int i = 0; i < 4; ++i)
    {
        fastscan(arr[i]);
    }
    int sum=0;
    string str;
    cin>>str;
    int length=str.length();

    for (int i = 0; i < length; ++i)
    {
        int temp=(int)str[i]-'0';
        sum+=arr[temp-1];
    }
    cout<<sum;
}