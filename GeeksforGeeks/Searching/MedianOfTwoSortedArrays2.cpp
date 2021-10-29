#include<iostream>
#include <climits>
using namespace std;


double getMed(int a1[],int a2[],int n1,int n2)
{
	int begin=0,end=n1;

	while(begin<=end)
	{
		int i1=(begin+end)/2;
		int i2=(n1+n2+1)/2-i1;

		int min1=(i1==n1)?INT_MAX:a1[i1];
		int max1=(i1==0)?INT_MIN:a1[i1-1];
		int min2=(i2==n2)?INT_MAX:a2[i2];
		int max2=(i2==0)?INT_MIN:a2[i2-1];

		if(max1<=min2 && max2<=min1){
			if ((n1+n2)%2==0){
			return (double)(max(max1,max2)+min(min2,min2))/2;
			}
			else{
				return (double)max(max1,max2);
			}
		}else if(max1>min2){
			end=i1-1;			
		}
		 else{
		 	begin=i1+1;
		 }
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>arr2[i];
	}
	if(n<=m)
		cout<<getMed(arr1,arr2,n,m);
	else
		cout<<getMed(arr2,arr1,m,n);
}