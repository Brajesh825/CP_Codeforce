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
int Min(int a,int b)
{
    return a<b?a:b;
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
     int candy[n],orange[n];
     int minCandy=INT_MAX,minOrange=INT_MAX;
     long long steps=0;

     for (int i = 0; i < n; ++i)
     {
         fastscan(candy[i]);
         if(candy[i]<minCandy)
            minCandy=candy[i];
     }
     for (int i = 0; i < n; ++i)
     {
         fastscan(orange[i]);
         if(orange[i]<minOrange)
            minOrange=orange[i];
     }

     for (int i = 0; i < n; ++i)
     {
         if(candy[i]>minCandy && orange[i]>minOrange)
         {
            int tempOrange=orange[i]-minOrange;
            int tempCandy=candy[i]-minCandy;
            int min=Min(tempOrange,tempCandy);
            candy[i]=candy[i]-min;
            orange[i]=orange[i]-min;
            i--;
            steps+=min;
         }else if(candy[i]>minCandy)
         {
            int min=candy[i]-minCandy;
            candy[i]=candy[i]-min;
            i--;  
            steps+=min;
         }else if(orange[i]>minOrange)
         {
            int min=orange[i]-minOrange;
            orange[i]=orange[i]-min;
            i--;
            steps+=min;  
         }
     }
     cout<<steps<<'\n';
    }
}