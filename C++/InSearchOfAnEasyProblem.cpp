#include <iostream>
using namespace std;

int main()
{
	int count,temp;
	string flag="EASY";
	cin>>count;

	for(int i = 0; i < count; ++i) {
		cin>>temp;
		if(temp==1)
		{
			flag="HARD";
			break;
		}
	}
	cout<<flag;
}