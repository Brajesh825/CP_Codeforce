#include <iostream>
using namespace std;

int main(){
	int n,t,length;
	string queue;
	cin>>n>>t>>queue;
	length=queue.length();

	for(unsigned j = 0; j <t ; j++) {
		for(int i = length-1; i > 0; --i) {
		if(queue[i]=='G')
		{
			if(queue[i-1]=='B')
			{
				queue[i]='B';
				queue[i-1]='G';
				i--;
			}
		}
		}
	}

	cout<<queue;

}