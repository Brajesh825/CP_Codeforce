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
	int n,noOfRecuits=0,noOfCrime=0;
	fastscan(n);

	while(n--)
	{
		int temp;
		fastscan(temp);

		if(temp>0)
		{
			noOfRecuits+=temp;
		}
		else if(temp==-1)
		{
			if(noOfRecuits>0)
				noOfRecuits--;
			else
				noOfCrime++;
		}
	}
	cout<<noOfCrime;

}