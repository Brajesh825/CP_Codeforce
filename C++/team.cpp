#include<iostream>
using namespace std;

int main(){

	int n,sum=0;
	cin>>n;

	while(n--){
		int temp=0;
		for(int i=0;i<3;i++)
		{
			int x;
			cin>>x;
			if(x==1)
				temp++;
		}
		if(temp>=2){
			sum++;
		}
	}
	cout<<sum;
}