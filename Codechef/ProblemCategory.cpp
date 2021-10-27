#include<bits/stdc++.h>
using namespace std;

#define fastscan() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastscan();
    int n;
    cin>>n;
    while(n--)
    {
    	int m;
    	cin>>m;
    	if(m>=1 && m<100)
    		cout<<"Easy"<<'\n';
    	else if(m>=100 && m< 200)
    		cout<<"Medium"<<'\n';
    	else if(m>=200 && m<=300)
    		cout<<"Hard"<<'\n';
    }

}
