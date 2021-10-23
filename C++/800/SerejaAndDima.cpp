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
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        fastscan(arr[i]);
    }
    int sereja=0;
    int Dima=0;
    int count=0;
    for (int i = 0,j=n-1; i <= j;)
    {
        if(count%2==0){
            if(arr[i]>arr[j]){
                sereja+=arr[i];
                i++;
            }
            else{
                sereja+=arr[j];
                j--;
            }
            count++;
        }else{
            if(arr[i]>arr[j]){
                Dima+=arr[i];
                i++;
            }
            else{
                Dima+=arr[j];
                j--;
            }
            count++;        
        }
    }
    cout<<sereja<<" "<<Dima;
}