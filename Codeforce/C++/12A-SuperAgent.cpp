#include <iostream>
using namespace std;

int main()
{
	char arr[9];
	for (int i = 0; i < 9; ++i)
	{
		cin>>arr[i];
	}
	string flag="NO";
	for (int i = 0; i < 9; ++i)
	{
		if(arr[i]==arr[8-i])
		{
			flag="YES";
		}
		else{
			flag="NO";
			break;
		}
	}
	cout<<flag;

}