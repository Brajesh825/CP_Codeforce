#include<iostream>
#include <math.h>
#include <vector>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

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
int minofThree(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    if(b<=a && b<=c)
        return b;
    else
        return c;
}

int main()
{
    fastread();
    int count;
    fastscan(count);
    int student[count];
    for (int i = 0; i < count; ++i)
    {
        fastscan(student[i]);
    }
    vector<int> programmers,mathematicians,bodybuilders;

    for (int i = 0; i < count; ++i)
    {
        if(student[i]==1){
            programmers.push_back(i+1);
        }
        else if(student[i]==2){
            mathematicians.push_back(i+1);
        }
        else if(student[i]==3){
            bodybuilders.push_back(i+1);
        }
    }

    int maxTeam=minofThree(programmers.size(),mathematicians.size(),bodybuilders.size());

    cout<<maxTeam<<'\n';
    for (int i = 0; i < maxTeam; ++i)
    {
        cout<<programmers[i]<<" "<<mathematicians[i]<<" "<<bodybuilders[i]<<" ";
    }

}