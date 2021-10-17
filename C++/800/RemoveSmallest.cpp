#include<bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
	fastread();
	int n;
	cin>>n;
	while(n--)
	{
		string flag="YES";
		int count;
		cin>>count;
		int arr[count];
		for (int i = 0; i < count; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+count);

		for (int i = 0; i < count-1; ++i)
		{
			if(arr[i]-arr[i+1] <=1 && arr[i]-arr[i+1] >=-1){
				continue;
			}else{
				flag="NO";
				break;
			}
		}
		cout<<flag<<"\n";
	}
}