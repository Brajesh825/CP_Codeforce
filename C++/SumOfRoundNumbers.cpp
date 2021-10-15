#include<iostream>
#include<vector>
using namespace std;

#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

void fastscan(int &x)
{
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
}

int main()
{
    fastread();
    int n;
    fastscan(n);
    while(n--)
    {
        int sum,count=0,flag=1;
        vector<int> v;
        fastscan(sum);
        while(sum>0)
        {
            int temp=sum%10;
            if(temp!=0)
            {
                temp*=flag;
                count++;
                v.push_back(temp);                
            }
            sum=sum/10;
            flag*=10;
        }
        cout<<count<<'\n';

        if(v.size()!=2){
            for (int i = v.size()-2 ; i >=0 ; --i)
            {
            cout<<v[i]<<" ";
            }
            cout<<v[v.size()-1]<<"\n";            
        }else{
            cout<<v[1]<<" "<<v[0]<<'\n';
        }

    }
}