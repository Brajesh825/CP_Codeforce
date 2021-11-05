#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int x=0;

	int arr[t+1];

	arr[1]=1;
	for (int i = 2; i <= t; ++i)
	{
		arr[i]=i+arr[i-1];
	}

	int height=1;
	int count=0;
	for (int i = 1; i <=t; ++i)
	{
		count+=arr[i];
		if(count>t)
		{
			height=i-1;
			break;
		}
	}
	cout<<height<<'\n';	
}