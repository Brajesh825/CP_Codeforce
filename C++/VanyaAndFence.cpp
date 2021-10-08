#include <iostream>
using namespace std;

int main()
{
	int numberOfFriends,heightOfFence,roadWidth=0;
	cin>>numberOfFriends>>heightOfFence;

	int friendsHeight[numberOfFriends];

	for (int i = 0; i < numberOfFriends; ++i)
	{
		cin>>friendsHeight[i];
	}

	for (int i = 0; i < numberOfFriends; ++i)
	{
		if(friendsHeight[i]>heightOfFence)
			roadWidth+=2;
		else
			roadWidth++;
	}
	cout<<roadWidth;

}