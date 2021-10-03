#include <iostream>
#include <cctype>
using namespace std;

int main(){
	string m,n;
	int flag=0;
	cin>>m;
	cin>>n;
	
	for(unsigned int i=0;i<m.length();i++)
	{
		char tempm,tempn;
		tempm=toupper(m[i]);
		tempn=toupper(n[i]);
		if(tempm==tempn){
			flag=0;
		}
		else if(tempm<tempn)
		{
			flag=-1;
			break;
		}
		else{
			flag=1;
			break;
		}

	}
	cout<<flag;
}