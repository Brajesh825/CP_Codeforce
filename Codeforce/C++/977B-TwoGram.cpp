#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main(){

	int n;
	cin>>n;
	string str;
	cin>>str;
	if(n==2){
		cout<<str;
		return 0;
	}

	pair<string,int>pr("",0);

	for (int i = 0; i < n-1; ++i)
	{
		string sub = str.substr(i,2);
		int count=1;
		for (int j = i+1; j < n; ++j)
		{
			string temp=str.substr(j,2);
			if(temp==sub){
				count++;
			}
		}
		if(count>=pr.second)
		{
			pr.first=sub;
			pr.second=count;
		}
	}
	cout<<pr.first;


}