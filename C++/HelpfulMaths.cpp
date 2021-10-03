#include<iostream>
using namespace std;

int main(){
	int one=0,two=0,three=0;
	string str;
	cin>>str;


	for (unsigned int i = 0; i < str.length(); ++i)
	{
		char temp=str[i];

		if(temp=='+')
			continue;
		else if(temp=='1')
			one++;
		else if(temp=='2')
			two++;
		else if(temp=='3')
			three++;

	}

	for (int i = 1; i <= one; ++i)
	{
		cout<<"1";
		if(i==one && two==0 && three==0)
			break;
		else{
			cout<<"+";
		}
	}
	for (int i = 1; i <= two; ++i)
	{
		cout<<"2";
		if(i==two && three==0)
			break;
		else{
			cout<<"+";
		}
	}
	for (int i = 1; i <= three; ++i)
	{
		cout<<"3";
		if(i==three)
			break;
		else{
			cout<<"+";
		}
	}
}