#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	string str;
	bool arr[26];
	for (int i = 0; i < 26; ++i)
	{
		arr[i]=0;
	}
	cin>>n;
	cin>>str;
	for (int i = 0; i < n; ++i)
	{
		char ch = toupper(str[i]);
		arr[ch-65]=true;
	}

	for (int i = 0; i < 26; ++i)
	{
		if(arr[i]==true)
			count++;
	}

	if(count==26)
		cout<<"YES";
	else
		cout<<"NO";
}