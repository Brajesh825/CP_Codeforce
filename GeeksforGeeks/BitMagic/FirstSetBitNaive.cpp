#include<bits/stdc++.h>
using namespace std;

unsigned int firstSetBit(int n)
{
	int count=0;

	while(n>0)
	{
		if((n&1)%2==1)
		{
			count++;
			break;
		}
		else if((n&1)%2==0)
		{
			count++;
			n=n>>1;
		}
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<firstSetBit(n);
}