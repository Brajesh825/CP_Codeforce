#include<bits/stdc++.h>
using namespace std;
#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main()
{
	CHIDORI
	string cardOnTable;
	cin>>cardOnTable;

	string deck[5];

	for (int i = 0; i < 5; ++i)
	{
		cin>>deck[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		if(deck[i][0]==cardOnTable[0])
		{
			cout<<"YES";
			return 0;
		}
		if(deck[i][1]==cardOnTable[1]){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}