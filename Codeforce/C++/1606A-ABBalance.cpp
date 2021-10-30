#include<iostream>
using namespace std;

#define fastscan() (ios_base::sync_with_stdio(false),cin.tie(NULL));
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;
       
        if(str[0]!=str[str.length()-1]){
           str[str.length()-1]= str[0];
        }

        cout<<str<<'\n';       

    }
}