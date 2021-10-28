#include<bits/stdc++.h>
using namespace std;

 int main()
 {
   int n,count=0;
   string s;
   cin>>n;
   set<string>s1;       
   map<string,int>p; 
   for(int i=0;i<n;i++){
      cin>>s;
      if(s1.find(s)!=s1.end()){
         p[s]++;
         cout<<s<<p[s]<<endl;
      }
      else{
         p[s]=count;
         cout<<"OK"<<endl;
      }
      s1.insert(s);
   }
   return 0;
 }