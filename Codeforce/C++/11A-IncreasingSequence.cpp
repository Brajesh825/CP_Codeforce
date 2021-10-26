#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastread();
    int n,d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }

    int count=0;
    for (int i = 1; i < n; ++i)
    {
        if(arr[i]<arr[i-1]){

           int diff= arr[i-1]-arr[i];
           int temp=ceil(diff/(d*1.0));
           count+=temp;
           arr[i]+=temp*d;
           if(arr[i]==arr[i-1]){
            count++;
            arr[i]+=d;
           }
        }else if(arr[i]==arr[i-1]){
            count++;
            arr[i]+=d;
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout<<arr[i]<<" ";
    // }

    cout<<count;
}