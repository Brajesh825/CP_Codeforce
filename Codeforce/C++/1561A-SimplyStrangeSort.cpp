#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

bool IsSorted(int arr[],int n)
{
    bool flag=false;
            for (int i = 0; i < n-1; ++i)
            {
                if(arr[i]>arr[i+1])
                {
                    flag=false;
                    break;
                }else{
                    flag=true;
                }
            }
    return flag;
}

int main()
{
    CHIDORI
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        int iteration=0;
        bool flag = IsSorted(arr,n);
        
        while(flag==false){
          if(iteration%2==0){
               for (int i = 0; i <n-1; i+=2)
               {
                    if(arr[i]>arr[i+1])
                   {
                       int temp=arr[i];
                       arr[i]=arr[i+1];
                       arr[i+1]=temp;
                   }
               }
           }
           else{
                for (int i = 1; i <n-1; i+=2)
                {
                    if(arr[i]>arr[i+1])
                    {
                        int temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;                        }
                    }
                }
                iteration++;
                flag=IsSorted(arr,n);
            }
            cout<<iteration<<'\n';

        }
}