#include<iostream>
using namespace std;
#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main()
{
	CHIDORI;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0;
		int even=0,odd=0;

		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin>>temp;
			sum+=temp;
			if(temp%2==0)
				even++;
			else
				odd++;
		}

		if(sum%2==1){
			cout<<"YES"<<'\n';
		}
		else{
			if(odd>0 && even>0){
				cout<<"YES"<<'\n';
			}else{
				cout<<"NO"<<'\n';
			}
		}
		
	}
}