#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define log(x) std::cout << #x"=" << x << std::endl

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
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
bool isPrime(int n) {
  int i,f=1;
  for(i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          f=0;
          break;
      }
  } 
  if(f==1)
  return true;
  else
  return false;
}

int modulo(int n){
    return n>0?n:-n;
}

int maxofThree(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    else
        return c;
}
int minofThree(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    if(b<=a && b<=c)
        return b;
    else
        return c;
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

int mininarray(int arr[],int size)
{
    int min=99999999;
    for (int i = 0; i < size; ++i)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int Max(int a,int b)
{
    return a>b?a:b;
}
int Min(int a,int b)
{
    return a<b?a:b;
}
void display(int arr[],int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int charToInt(char ch)
{
    return (int)ch-'0';
}

int GCD (int a, int b){return (b == 0) ? a : GCD (b, a%b);}

void merge(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
    int l1=0,l2=0,n=0;
    while(l1<n1 && l2<n2)
    {
        if(arr1[l1]<arr2[l2])
        {
            arr3[n]=arr1[l1];
            n++;
            l1++;
        }else{
            arr3[n]=arr2[l2];
            n++;
            l2++;
        }
    }
    while(l1<n1){
        arr3[n]=arr1[l1];
        l1++;
        n++;
    }
    while(l2<n2){
        arr3[n]=arr2[l2];
        l2++;
        n++;
    }
}