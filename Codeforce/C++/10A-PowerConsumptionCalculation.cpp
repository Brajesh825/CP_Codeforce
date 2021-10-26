#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastread();
    int n(0),p1(0),p2(0),p3(0),t1(0),t2(0);
    cin>>n>>p1>>p2>>p3>>t1>>t2;

    long total(0),previousTime(-1);

    for (int i = 0; i < n; ++i)
    {
        int start(0),finish(0);
        cin>>start>>finish;
        if(previousTime<0){
            previousTime=start;
        }

        total+=p1*(finish-start);

        int timeIdle = start - previousTime;

        if(timeIdle>t1+t2){
            total+= (timeIdle-t1-t2)*p3;
            timeIdle=t1+t2;
        }
        if (timeIdle>t1)
        {
            total+= (timeIdle-t1)*p2;
            timeIdle=t1;
        }
        total+=timeIdle*p1;

        previousTime = finish;
    }

    cout<<total;

}
