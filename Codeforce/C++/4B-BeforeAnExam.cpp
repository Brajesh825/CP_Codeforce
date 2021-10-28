#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
void display(int arr[],int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    fastread();
    int d,sumTime;
    cin>>d>>sumTime;

    int min[d];
    int max[d];
    int avg[d];
    int minSum=0;
    int maxSum=0;
    for (int i = 0; i < d; ++i)
    {
        cin>>min[i];
        minSum+=min[i];
        cin>>max[i];
        maxSum+=max[i];
    }

    if(maxSum<sumTime){
        cout<<"NO";
    }
    else if(maxSum==sumTime){
        cout<<"YES"<<'\n';
        display(max,d);
    }
    else if(minSum==sumTime){
        cout<<"YES"<<'\n';
        display(min,d);   
    }else if(sumTime>minSum && sumTime<maxSum){
        int sum=sumTime-minSum;

        cout<<"YES"<<'\n';
        for (int i = 0; i < d; ++i)
        {
            avg[i]=min[i];
            if(sum>0)
            {
                int temp=max[i]-min[i];
                if(temp<=sum){
                    avg[i]+=temp;
                    sum-=temp;
                }else{
                    avg[i]+=sum;
                    sum=0;
                }
            }
            cout<<avg[i]<<" ";
        }
    }else{
        cout<<"NO";
    }
}