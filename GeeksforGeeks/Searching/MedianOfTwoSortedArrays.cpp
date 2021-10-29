#include<iostream>
using namespace std;

void merge(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
	int l1=0,l2=0,n=0;
	while(l1<n1 && l2<n2)
	{
		if(arr1[l1]<arr2[l2])
		{
			arr3[n]=arr1[l1];
			n++;
			l1++;
		}else{
			arr3[n]=arr2[l2];
			n++;
			l2++;
		}
	}
	while(l1<n1){
		arr3[n]=arr1[l1];
		l1++;
		n++;
	}
	while(l2<n2){
		arr3[n]=arr2[l2];
		l2++;
		n++;
	}
}

float median(int arr[],int n)
{
	if(n%2==0)
	{
		return (arr[n/2]+arr[n/2-1])/2.0;
	}else{
		return arr[n/2];
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	int arr3[n+m];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>arr2[i];
	}

	merge(arr1,n,arr2,m,arr3);
	cout<<median(arr3,n+m);
}