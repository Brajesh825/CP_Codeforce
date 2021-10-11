#include <iostream>
using namespace std;

int main()
{
	int n,m,o,temp;
	cin>>n;

	bool arr[n+1];
	for(int i = 1; i <= n ; ++i) {
		arr[i]=false;	
	}

	cin>>m;
	while(m--){
		cin>>temp;
		arr[temp]=true;
	}
	cin>>o;
	while(o--){
		cin>>temp;
		arr[temp]=true;
	}

	bool flag=true;

	for(int i = 1; i <= n ; ++i) {
		if(arr[i]==false)
		{
			flag=false;
			break;
		}
	}

	if(flag)
	{
		cout<<"I become the guy.";
	}else{
		cout<<"Oh, my keyboard!";
	}

}