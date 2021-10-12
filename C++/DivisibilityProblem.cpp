#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--) {
	    int x,y,count=0;
	    cin>>x>>y;

	    if(x%y!=0)
	    	cout<<y-(x%y)<<endl;
	    else
	    	cout<<0<<endl;
	}
}