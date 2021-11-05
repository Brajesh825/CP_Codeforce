#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int Max(int a,int b)
{
    return a>b?a:b;
}
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
    CHIDORI
    int t;
    fastscan(t);
    while(t--)
    {
        int z;
        fastscan(z);
        int arr[z];

        for (int i = 0; i <z ; ++i)
        {
            fastscan(arr[i]);
        }


        for (int i = 0; i < z; ++i)
        {
            if(i!=z-1 && i!=0)
            {
                cout<<Max((arr[i-1]&arr[i]),(arr[i+1]&arr[i]))<<" ";
            }
            else if(i==z-1)
            {
                cout<<(arr[i-1]&arr[i])<<" ";
            }
            else if(i==0)
            {
                cout<<(arr[i+1]&arr[i])<<" ";
            }
        }
        cout<<'\n';
    }

}