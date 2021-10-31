#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int main(){
	CHIDORI
	int n,k;
	cin>>n>>k;

	while(k--){
		if(n%10!=0)
			n--;
		else
			n=n/10;
	}
	cout<<n;

}