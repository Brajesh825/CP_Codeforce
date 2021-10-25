#include <iostream>
using namespace std;

int main()
{
	float n,sum=0;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int temp;
		cin>>temp;
		sum+=temp;
	}

	cout<<sum/n;
}