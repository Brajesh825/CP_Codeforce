#include<iostream>
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

int main()
{
	fastread();
    int k,r,noOfShovel=0,cost=0;
    fastscan(k);
    fastscan(r);

   	for (int i = 1;; ++i)
   	{
   		cost=k*i;
   		noOfShovel++;
   		if(cost%10==r || cost%10==0)
   		{
   			break;
   		}
   	}

    cout<<noOfShovel;
}