#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
     int n,k;
     scanf("%d %d",&n,&k);

     long long int ans=0,m=1;
     if(n>=k)
     { ans=1;
       int j=1;
      // long long int  m=1;
      for(int i=n;i>(n-k);i--)
      {
        ans=(ans*i)/j;
        m=m*i;
        ++j;


      }
    //  cout<<ans<<' '<<m<<endl;




     }
    printf("Case %d: %lld\n",t,ans*m);
    t++;


  }


}
