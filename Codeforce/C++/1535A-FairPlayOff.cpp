#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[4];

		for (int i = 0; i < 4; ++i)
		{
			cin>>arr[i];
		}

		int first=0,second=0;
		int firstIndex,secondINdex;

		for (int i = 0; i < 4; ++i)
		{
			if(arr[i]>first)
			{
				first=arr[i];
				firstIndex=i;
			}
		}
		arr[firstIndex]=0;
		for (int i = 0; i < 4; ++i)
		{
			if(arr[i]>second)
			{
				second=arr[i];
				secondINdex=i;
			}
		}

		if((firstIndex==0 && secondINdex==1) || (firstIndex==1 && secondINdex==0) )
			cout<<"NO"<<'\n';
		else if((firstIndex==1 && secondINdex==2) || (firstIndex==1 && secondINdex==1))
			cout<<"YES"<<'\n';
		else if((firstIndex==2 && secondINdex==3) || (firstIndex==3 && secondINdex==2) )
			cout<<"NO"<<'\n';
		else
			cout<<"YES"<<'\n';

	}
}