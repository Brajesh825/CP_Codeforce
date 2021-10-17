#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

void fastscan(int &x)
{
        bool neg=false;
        int c;
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
    int arr[4];
    
    for(int i = 0; i < 4; ++i) {
        fastscan(arr[i]);
    }   

    sort(arr,arr+4);

    int abc= (arr[0]+arr[1]+arr[2])/2;
    int a= abc-arr[1];
    int b= abc-arr[2];
    int c= abc-arr[0];

    cout<<a<<" "<<b<<" "<<c;


}