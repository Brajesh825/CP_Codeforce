#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10] = {0};

	int n;
	cin>>n;
	string m;
	cin>>m;

	if(n==0 && m=="0")
		cout<<"OK";
	else{
		while(n>0)
	{
		int temp=n%10;
		arr[temp]=arr[temp]+1;
		n=n/10;
	}

	string str="";
	
	for (int i = 1; i < 10; ++i)
	{
		if(arr[i]>0)
		{
			str+=to_string(i);
			arr[i]--;
			break;
		}
	}
	for (int i = 0; i < 1; ++i)
	{
		if(arr[i]>0)
		{
			str+=to_string(i);
			arr[i]--;
			i--;
		}
	}

	for (int i = 1; i < 10; ++i)
	{
		if(arr[i]>0)
		{
			str+=to_string(i);
			arr[i]--;
			i--;
		}
	}
	
	if(str==m)
		cout<<"OK";
	else
		cout<<"WRONG_ANSWER";		
	}

}