#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
  int i,f=1;
  for(i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          f=0;
          break;
      }
  } 
  if(f==1)
  return true;
  else
  return false;
}

int main()
{
	int n,m;
	cin>>n>>m;

	for (int i = n+1; i <= m; ++i)
	{
		if(isPrime(i) && i==m ){
			cout<<"YES";
			return 0;
		}else if(isPrime(i) && i!=m){
			cout<<"NO";
			return 0;
		}else{
			continue;
		}
	}

	cout<<"NO";

}