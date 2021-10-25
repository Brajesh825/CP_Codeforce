#include<iostream>
using namespace std;

void divideMelons(int n)
{
	if(n==1 || n==2)
		cout<<"NO";
	else if(n%2==0)
		cout<<"YES";
	else
		cout<<"NO";

}

int main()
{
	int n;
	cin>>n;
	divideMelons(n);
	return 0;
}