#include<bits/stdc++.h>
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

int main()
{
    fastread();
    int n,k,l,c,d,p,nl,np;
    fastscan(n);    // no of friends
    fastscan(k);    // k bottle of drink
    fastscan(l);    // each bottle has l ml of drink
    fastscan(c);    // number of limes
    fastscan(d);    // no of slice of lime
    fastscan(p);    // p gram of salt
    fastscan(nl);   // ml for each tost
    fastscan(np);   // np for each toast

    int total_drink = k*l;
    int total_slice_of_lime= c*d;
    int total_salt = p;

    int drink_per_toast=nl;
    int slice_per_toast=1;
    int salt_per_toast=np;

    int no_of_toast=0;

    while(true)
    {
        total_drink-=drink_per_toast;
        total_slice_of_lime-=slice_per_toast;
        total_salt-=salt_per_toast;

        if(total_salt >=0 && total_slice_of_lime>=0 && total_drink>=0){
            no_of_toast++;
        }else{
            break;
        }
    }
    cout<<no_of_toast/n;
}
