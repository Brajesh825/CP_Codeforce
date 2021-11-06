#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));


int circularAlphabets(char a,char b)
{
    int z= abs(a-b);

    if(z>13)
        z=26-z;
    return z;
}

int main()
{
    CHIDORI

    string str;
    cin>>str;

    int sum=0;
    char initial='a';

    for (int i = 0; i < str.length(); ++i)
    {
        sum+=circularAlphabets(initial,str[i]);
        initial=str[i];
    }

    cout<<sum;
}