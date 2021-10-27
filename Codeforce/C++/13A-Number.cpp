#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int GCD (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int digitSum(int number,int base )
{
    int total=0;
    while(number>0)
    {
        total+=number%base;
        number/=base;
    }
    return total;
}

int main()
{
    fastread();

    int n,i=0;
    cin>>n;
    int totalSum=0;

    for ( i = 2; i < n; ++i)
    {
        totalSum+=digitSum(n,i);
    }
    int number=n-2;

    int gcd=GCD(totalSum,number);

    cout<<totalSum<<"/"<<number/gcd;
}