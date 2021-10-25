#include<iostream>
using namespace std;


void Rearrange(int arr[],int n)
{
	for(int i = 0; i < 4; ++i) {
		arr[i]=n%10;
		n=n/10;
	}
}


bool checkDistinct(int n)
{
	int arr[4];
	bool flag=false;
	Rearrange(arr,n);	

	for(int i = 0; i < 4; ++i) {
		for (int j = i+1; j < 4; ++j)
		{
			if(arr[i]==arr[j])
			{
				return false;
			}
		}
	}
	return true;

}

int BeautifulYear(int n){
	bool flag=false;
	while(n++) {
	    flag=checkDistinct(n);

	    if (flag)
	    {
	    	break;
	    }
	}
	return n;
}

int main()
{
	int n;
	cin>>n;

	n=BeautifulYear(n);
	cout<<n;
}