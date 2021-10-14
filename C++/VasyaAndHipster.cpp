#include <iostream>
using namespace std;
int main()
{
	int m,n,fashion=0,regular=0;
	cin>>m>>n;

	while(m>0 || n>0)
	{
		if(m>=1 && n>=1)
		{
			m--; n--;
			fashion++;
		}else if (m>=2)
		{
			m-=2;
			regular++;
		}else if (n>=2)
		{
			n-=2;
			regular++;
		}else{
			break;
		}
	}
	cout<<fashion<<" "<<regular<<endl;

}