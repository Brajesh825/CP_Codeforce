#include<iostream>
#include <math.h>
using namespace std;

#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

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

int main()
{
    fastread();
    int n;
    fastscan(n);
    int x=4,y=n-4;
    while(x+y==n)
    {
        if(!isPrime(x) && !isPrime(y)){
            break;
        }
        else{
            x++; y--;
        }
    }
    cout<<x<<" "<<y;
}
