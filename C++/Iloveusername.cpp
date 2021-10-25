#include <iostream>
using namespace std;

int main()
{
	int amazing=0,minPoint,maxPoint,n;
	cin>>n;	
	cin>>minPoint;
	maxPoint=minPoint;
	// cout<<n<<" ";
	// cout<<minPoint<<" "<<maxPoint;

	for (int i = 1; i < n; ++i)
	{
		int temp;
		cin>>temp;

		if(temp>maxPoint)
		{
			maxPoint=temp;
			amazing++;
		}else if(temp<minPoint)
		{
			minPoint=temp;
			amazing++;
		}
	}
	cout<<amazing;


}