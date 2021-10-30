#include<bits/stdc++.h'>
using namespace std;

int repeatingElement(int arr[],int n)
{
	sort(arr,arr+n);

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==arr[i+1])
			return arr[i];
	}
	return -1;
}
int main()
{
	int arr[] = {0,2,1,3,2,2};
	cout<<repeatingElement(arr,6);

}