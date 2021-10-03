#include <iostream>
using namespace std;

int mod(int n){
	return n>0?n:(-n);
}

int main(){

	int n,i,j,steps=0;
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j <5 ; ++j)
		{
			cin>>n;
			if(n==1){
				break;
			}	
		}
		if(n==1){
				break;
		}	
	}
	steps=mod(2-i);
	steps+=mod(2-j);
	cout<<steps;

}	

