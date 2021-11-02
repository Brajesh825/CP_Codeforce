#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
#define pno cout<<"NO"<<'\n';
#define pyes cout<<"YES"<<'\n';  

#define log(x) std::cout << #x"=" << x << std::endl

#define CHIDORI (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));

int maxofThree(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main()
{
    CHIDORI
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int max=maxofThree(a,b,c);
        int diff;
        diff=(max-a);
        diff+=(max-b);
        diff+=(max-c);
        if(n>=diff){
            n-=diff;
            if(n%3==0)
               pyes
            else
               pno            
        }else{
            pno
        }

    }
    
}
