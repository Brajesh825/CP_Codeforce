#include <iostream>
using namespace std;

int main()
{
	int n,count=1;
	cin>>n;

	char arr[n*2];

	for(int i = 0; i < 2*n; ++i) {
		cin>> arr[i];
	}
	for(int i = 0; i < 2*n-1; ++i) {
		if(arr[i]==arr[i+1])
			count++;
	}
	cout<<count;

}