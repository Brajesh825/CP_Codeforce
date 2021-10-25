#include <iostream>
using namespace std;

int main()
{
	string num1,num2;
	int length;
	cin>>num1>>num2;
	length=num1.length();
	int arr[length];

	int flag=0;

	for(int i = length-1; i >= 0; --i) {
		if(num1[i]== num2[i])
			arr[i]=0;
		else
			arr[i]=1;

	}

	for (int i = 0; i < length; ++i)
	{
		cout<<arr[i];
	}

}