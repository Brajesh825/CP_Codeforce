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
        int n=str.length();

        ll AB=0;
        ll BA=0;

        for (int i = 0; i < n-1; ++i)
        {
            if(str[i] == 'a' && str[i+1] == 'b'){
                AB++;
            }
        }
        for (int i = 0; i < n-1; ++i)
        {
            if(str[i] == 'b' && str[i+1] == 'a'){
                BA++;
            }
        }
        if(AB==BA)
        {
            cout<<str<<'\n';
        }
        else if(AB>BA)
        {
            ll temp = str.find('a');
            str[temp] = 'b';
            cout<<str<<'\n';
        }
        else
        {
            ll temp = str.find('b');
            str[temp] = 'a';
            cout<<str<<'\n';
        }

    }
}