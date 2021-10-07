#include <iostream>
using namespace std;

string Reverse(string str)
{
	string temp;

	for(int i =str.length()-1 ; i >=0; --i) {
		temp+=str[i];
	}
	return temp;

}

int main(){
	string s1,s2,temp;
	cin>>s1>>s2;

	temp=Reverse(s1);

	if(s2==temp)
		cout<<"YES";
	else
		cout<<"NO";

}