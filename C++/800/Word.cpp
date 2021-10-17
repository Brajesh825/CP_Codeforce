#include <iostream>
#include <cctype>
using namespace std;

int main(){
	string str;
	cin>>str;

	int countUpper=0;
	int countLower=0;

	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i]>='a' && str[i] <='z')
			countLower++;
		else
			countUpper++;
	}

	if(countLower>=countUpper){
		for (int i = 0; i < str.length(); ++i)
		{
			str[i]=tolower(str[i]);
		}
		cout<<str;
	}
		
	else {
		for (int i = 0; i < str.length(); ++i)
		{
			str[i]=toupper(str[i]);
		}
		cout<<str;
	}
}