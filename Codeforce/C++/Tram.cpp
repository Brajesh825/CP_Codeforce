#include <iostream>
using namespace std;

int main(){
	int n,minCapacity=0,currCapacity=0;
	cin>>n;

	while(n>1){
		int exit,enter;
		cin>>exit>>enter;

		currCapacity-=exit;
		currCapacity+=enter;

		if(currCapacity>minCapacity)
			minCapacity=currCapacity;
		n--;
	}
	cout<<minCapacity;
}