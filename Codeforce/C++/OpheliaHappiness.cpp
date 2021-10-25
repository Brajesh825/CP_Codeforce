#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        if(ch=='R')
        {
            int temp;
            cin>>temp;
            sum+=temp;
        }else if(ch=='T')
        {
            cout<<sum<<'\n';
        }

    }    
}