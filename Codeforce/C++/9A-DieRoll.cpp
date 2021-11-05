#include<bits/stdc++.h>
using namespace std;

int main()
{
		int x,y;
		cin>>x>>y;

		int maxM=6-max(x,y)+1;
		int faces=6;


		if(maxM%2==0 && faces%2==0){
			maxM=maxM/2;
			faces=faces/2;
		}
		if(maxM%3==0 && faces%3==0){
			maxM=maxM/3;
			faces=faces/3;
		}

		cout<<maxM<<'/'<<faces<<'\n';


}