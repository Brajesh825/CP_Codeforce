#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;

	int length=str.length();

	for (int i = 0; i < length; ++i)
	{
		if(str[i]=='.')
			cout<<"0";
		else if(str[i]='-'){
			if(str[i+1]=='.')
				cout<<"1";
			else
				cout<<2;

			++i;
		}
	}
}