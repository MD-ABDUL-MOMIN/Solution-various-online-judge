#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int t=1,T;
  scanf("%lld",&T);
  while(t<=T)
  {
     string name,ans;
     long long int n;
     cin>>n>>name;

     if(n%4==0)ans="Bob";
     else if(n%4==1)ans="Bob";
     else if(n%4==2)ans=name;
     else ans="Alice";

     cout<<"Case "<<t<<": "<<ans<<endl;

     t++;


  }
  return 0;


}
