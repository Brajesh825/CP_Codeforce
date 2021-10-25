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
    int n;
    fastscan(n);

    int count3=0;
    int count2=0;
    while(n>=2)
    {
        if(n==3){
            count3++;
            break;
        }
        else{
            count2++;
            n-=2;
        }
    }
    cout<<count2+count3<<endl;
    for (int i = 0; i < count2; ++i)
    {
        cout<<"2"<<" ";
    }
    for (int i = 0; i < count3; ++i)
    {
        cout<<"3"<<" ";
    }
}