#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int sumofarray(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; ++i)
    {
        sum+=arr[i];
    }
    return sum;
}
void swap(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    fastread();
    int n;
    cin>>n;
    while(n--)
    {
        long long n,m;
        cin>>n>>m;
        vector<long long> a,b;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            a.emplace_back(temp);
        }
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            b.emplace_back(temp);
        }
        sort(a.begin(),a.end());
        sort(a.begin(),a.end(),greater<long long> ());
        for(int i=0;i<m;i++)
        {
            if(b[i]>a[i])
                swap(a[i],b[i]);
        }
        long long total=0;
        for(int i=0;i<n;i++)
            total+=a[i];
        cout<<total<<endl;
        
    }
}