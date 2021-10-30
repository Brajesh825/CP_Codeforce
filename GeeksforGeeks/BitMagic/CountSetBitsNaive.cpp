#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBit(int n)
{
	unsigned int count=0;

	while(n>0)
	{
		if(n%2!=0)
			count++;
		n=n/2;

	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<countSetBit(n);
}