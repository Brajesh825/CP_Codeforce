#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBit(int n)
{
	 if(n==0)
         return 0;
     int x=(log2(n)); //finding the most significant bit of n
     return ( (pow(2,x-1)*x) + (n- pow(2,x) +1) + countSetBit(n-pow(2,x)));
}

int main()
{
	int n;
	cin>>n;
	cout<<countSetBit(n);
}