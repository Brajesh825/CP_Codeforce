#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}
int min(int arr[],int size)
{
    int min=99999999;
    for (int i = 0; i < size; ++i)
    {
        if(arr[i]<min && arr[i]!=0)
            min=arr[i];
    }
    return min;
}
int optimize(int arr[],int size,int a)
{
    for (int i = 0; i < size; ++i)
    {
        if(arr[i]==a && arr[i]!=0)
        {
            arr[i]=0;
        }
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    int arr[n],arr2[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }


    int a=-1,b=-1,c=-1;

    a=min(arr,n);
    a=optimize(arr,n,a);

    b=min(arr,n);
    b=optimize(arr,n,b);
    
    c=min(arr,n);
    c=optimize(arr,n,c);

    int x=-1,y=-1,z=-1;
    for (int i = 0; i < n; ++i)
    {
        if(arr2[i]==a){
            x=i+1;
        }
        else if(arr2[i]==b){
            y=i+1;
        }
        else if(arr2[i]==c){
            z=i+1;
        }
    }
    if(x==-1 || y== -1 || z== -1){
        cout<<-1<<" "<<-1<<" "<<-1;
    }else{
        cout<<x<<" "<<y<<" "<<z;        
    }

}