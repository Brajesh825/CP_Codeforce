#include<bits/stdc++.h>
using namespace std;
#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main()
{
	CHIDORI
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		set<int> s;

		for(int x:v)
			s.insert(x);

		cout<<s.size();

		cout<<'\n';
	}

}