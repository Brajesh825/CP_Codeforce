#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t,sum=0,count=0;
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
            count++;
        }else if(ch=='A')
        {
           cout << fixed << setprecision(9)<<sum/count<<'\n';
        }

    }    
}