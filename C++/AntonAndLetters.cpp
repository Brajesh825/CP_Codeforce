#include<iostream>
using namespace std;

int main()
{
	int count=0;
	bool characters[26];
	string str;
	getline(cin,str);

	int length=str.length();
	for(int i = 0; i < 26; ++i) {
		characters[i]=0;
	}	

	for(int i = 1; i < length-1; ++i) {
		char ch=str[i];
		if(ch!=',')
			characters[ch-97]=true;
	}

	for(int i = 0; i < 26; ++i) {
		if(characters[i]==true)
			count++;
	}
	cout<<count;


}