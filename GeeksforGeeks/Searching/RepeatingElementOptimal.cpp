#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int arr[],int n)
{
	int slow=arr[0]+1,fast=arr[0]+1;
	do{
		slow=arr[slow]+1;
		fast=arr[arr[fast]]+1;
	}while(slow!=fast);
	slow=arr[0];
	while(slow!=fast)
	{
		slow=arr[slow]+1;
		fast=arr[fast]+1;
	}
	return slow-1;
}

int main()
{
	int arr[] = {0,2,4,3,2,4};
	cout<<repeatingElement(arr,6);

}