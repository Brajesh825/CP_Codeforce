#include<bits/stdc++.h>
using namespace std;

void isSetBit(int n,int k)
{
	if((n&(1<<(k-1)))!=0 )
		cout<<"YES";
	else
		cout<<"NO";
}

int main()
{
	int n,k;
	cin>>n>>k;
	isSetBit(n,k);
}