#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; string str;
        cin>>n;
        cin>>str;
        string answer="YES";
       
        for (int i = 0; i < n-1; ++i)
        {
            bool flag=0;
            for (int j = i+1; j < n; ++j)
            {
                if(flag==0)
                {
                    if(str[i]==str[j])
                    {
                        flag=0;
                    }else {
                        flag=1;
                    }
                }
                else if(flag==1)
                {
                    if(str[i]==str[j])
                    {
                        answer="NO";
                        i=n;
                        break;
                    }
                }
            }
        }
        cout<<answer<<'\n';

    }
}
