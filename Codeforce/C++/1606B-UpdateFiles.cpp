#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll computers=1;
        ll remaining=n-1;
        ll day=0;

        while(remaining > 0 && computers <=k )
        {
            remaining-=computers;
            computers+=computers;
            day++;
        }
        if(remaining > 0){
            day += (remaining+k-1LL)/k;
        }   
        cout<<day<<'\n';
            
    }
}