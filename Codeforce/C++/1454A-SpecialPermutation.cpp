#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=n; i>0; i--){
            v.push_back(i);
        }
        for(int i=0; i<n; i++){
            if(v[i] == i+1){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}