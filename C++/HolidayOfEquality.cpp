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
int sumofarray(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i)
    {
        sum+=arr[i];
    }
    return sum;
}
int maxinarray(int arr[],int size)
{
    int max=0;
    for (int i = 0; i < size; ++i)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
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
    int sum=sumofarray(arr,n);
    int max=maxinarray(arr,n);

    cout<<max*n-sum;

}