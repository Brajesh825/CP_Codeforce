#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		cin>>str;

		int index=0;
		char smallest='z';

		for (int i = 0; i < str.length(); ++i)
		{
			if(str[i]<smallest)
			{
				smallest=str[i];
				index=i;
			}
		}
		
		cout<<str[index]<<" ";

		string st1=str.substr(0,index);
		string st2=str.substr(index+1);

		cout<<st1+st2<<'\n';

	}

}