#include <iostream>
using namespace std;

int main()
{
	int n,size,a=0,d=0;
	string str;
	cin>>n;
	cin>>str;
	size=str.length();

	for(int i = 0; i < size; ++i) {
		if(str[i]=='A')
			a++;
		else
			d++;
	}

	if(a>d) {
		cout<<"Anton";
	}else if(d>a){
		cout<<"Danik";
	}else{
		cout<<"Friendship";
	}

}