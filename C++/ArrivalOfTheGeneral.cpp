#include<iostream>
using namespace std;

int main()
{
	int n,swap=0;
	cin>>n;
	int arr[n];

	for(int i = 0; i < n; ++i) {
		cin>>arr[i];
	}

	int min=101,minPos,max=0,maxPos;

	for(int i = 0; i < n; ++i) {
		if(arr[i]<=min){
			min=arr[i];
			minPos=i;
		}
	}

	for(int i = minPos; i < n-1; ++i) {
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	swap=n-1-minPos;

	for(int i = 0; i < n; ++i) {
		if(arr[i]>max){
			max=arr[i];
			maxPos=i;
		}
	}
	swap+=maxPos;

	cout<<swap;

}