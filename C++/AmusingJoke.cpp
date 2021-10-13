#include <iostream>
using namespace std;

int main()
{
	int count=0;
	short int letters[26];
	for (int i = 0; i < 26; ++i)
	{
		letters[i]=0;
	}

	string guestName,residenceHost,pileOfLetters;
	cin>>guestName>>residenceHost>>pileOfLetters;
	
	if(pileOfLetters.length()==guestName.length()+residenceHost.length())
	{
		for (int i = 0; i < pileOfLetters.length(); ++i)
		{
			char ch = toupper(pileOfLetters[i]);
			letters[ch-67]+=1;
		}
		for (int i = 0; i < guestName.length(); ++i)
		{
			char ch = toupper(guestName[i]);
			letters[ch-67]-=1;
		}
		for (int i = 0; i < residenceHost.length(); ++i)
		{
			char ch = toupper(residenceHost[i]);
			letters[ch-67]-=1;
		}
		for (int i = 0; i < 26; ++i)
		{
			if(letters[i]==0)
				count++;
		}
		if (count==26)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}else{
		cout<<"NO";
	}

}