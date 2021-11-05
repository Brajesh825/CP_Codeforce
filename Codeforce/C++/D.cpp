#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));


int countBlocks(string str,int n)
{
    int blocks=1;
    char current=str[0];
        for (int i = 0; i < n; ++i)
        {
            if(str[i]==current)
            {
                continue;
            }
            else{
                current=str[i];
                blocks++;
            }
        }
    return blocks;
}

int main()
{
    CHIDORI
    int t;
    cin>>t;
    while(t--)
    {
        int z;
        string str;
        cin>>z>>str;

        int count;
        count=countBlocks(str,z);

        if(count==1)
            cout<<"SAHID"<<'\n';
        else if(count==2)
            cout<<"RAMADHIR"<<'\n';
        else{
            if(count%3==0 || count%3==1)
                cout<<"SAHID"<<'\n';
            else
                cout<<"RAMADHIR"<<'\n';
        }




       

    }
        
}