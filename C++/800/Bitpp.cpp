#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;

	for(unsigned i = 0; i < n; ++i) {
		string temp;
		cin>>temp;

		if(temp=="X++" || temp=="++X"){
			count++;
		}
		else{
			count--;
		}
	}
	cout<<count;

}