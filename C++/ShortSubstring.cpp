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
    int n;
    fastscan(n);
    while(n--)
    {
        int length;
        string str;
        cin>>str;
        length=str.length();
        if(length==2){
            cout<<str<<'\n';
        }
        else{
            cout<<str[0];
            for (int i = 1; i < length-2; i+=2)
            {
                cout<<str[i];
            }
            cout<<str[length-1]<<'\n';
        }
    }
}