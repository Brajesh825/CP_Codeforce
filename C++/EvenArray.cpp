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
        int count;
        fastscan(count);
        int evenCount=0;
        int oddCount=0;
        for (int i = 0; i < count; ++i)
        {
            int temp;
            fastscan(temp);
            if(temp%2==0 && i%2!=0){
                evenCount++;
            }
            if(temp%2==1 && i%2!=1){
                oddCount++;
            }

        }
        if(evenCount==0 && oddCount==0)
        {
            cout<<0<<'\n';
        }else if(evenCount == oddCount){
            cout<<(evenCount+oddCount)/2<<'\n';            
        }else{
            cout<<-1<<'\n';
        }
    }
}
