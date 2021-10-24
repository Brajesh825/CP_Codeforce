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
    int t,n,a[110];
    fastscan(t);
    while(t--){
        fastscan(n);
        n *= 2;
        for(int i=0; i<n; i++){
            fastscan(a[i]);
        }
        int pos[110];
        fill(pos,pos+110,0);

        vector<int>v;
        for(int i=n-1; i>=0; i--){
            if(pos[a[i]]==0){
                pos[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        int s;
        s=v.size();
        for(int i=s-1; i>=0; i--)
            cout<<v[i]<<" ";
        cout<<endl;
    }

}
