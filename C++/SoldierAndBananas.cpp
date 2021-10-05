#include<iostream>
using namespace std;

int main(){
	int k,n,w;
	cin>>k>>n>>w;

	int cost=0;

	for (int i = 1; i <= w; ++i)
	{
		cost+= i*k;
	}
	int temp=cost-n;

	if(temp>0)
		cout<<temp;
	else
		cout<<"0";


}