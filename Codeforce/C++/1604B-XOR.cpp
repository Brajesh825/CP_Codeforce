#include<iostream>
using namespace std;
#define ll long long
#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

int main()
{
	CHIDORI
	int t;
	cin>>t;

	while(t--)
	{
		int x,flag=0;
		cin>>x;
		int arr[x];
		for (int i = 0; i < x; ++i)
		{
			cin>>arr[i];
		}
		if(x%2==0){
			cout<<"YES"<<'\n';
		}
		else{
			for (int i = 0; i < x-1; ++i)
			{
				if(arr[i]>=arr[i+1]){
					flag=1;
					break;
				}
			}
			if(flag==1) cout<<"YES"<<'\n';
			else cout<<"NO"<<'\n';
		}
	}
}