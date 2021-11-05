#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,x;
		cin>>n>>x;

		int apartment=0;
		
		int floor=1;
		while(apartment<n)
		{
			if(floor==1)
				apartment+=2;
			else
				apartment+=x;

			floor++;
		}

		cout<<floor-1<<'\n';

	}
}