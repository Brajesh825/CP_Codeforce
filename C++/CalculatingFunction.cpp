#include <iostream>
using namespace std;

int calculatingFunction(int n)
{
	int count=0;

	for(unsigned i = 1; i <= n; ++i) {
		if(i%2==1)
			count-=i;
		else
			count+=i;

	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	n=calculatingFunction(n);
	cout<<n;
}