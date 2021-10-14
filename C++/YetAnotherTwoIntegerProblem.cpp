#include <bits/stdc++.h>
using namespace std;

#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
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
	fastread()
	int n;
	fastscan(n);
	while(n--)
	{
		int x,y;
		fastscan(x);
		fastscan(y);

		if(x<y)
		{
			cout<<(int)ceil((y-x)/10.0)<<"\n";
		}else if(x>y)
		{
			cout<<(int)ceil((x-y)/10.0)<<"\n";
		}else{
			cout<<0<<"\n";
		}

	}
}