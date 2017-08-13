#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    int n;
    bool sig=false;
    long long int num,ans;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      scanf("%lld",&num);
      if(i==1) ans=num;
      else ans^=num;
      if(num!=1) sig=true;
      }

      if(sig)
      {
         if(!ans)
         printf("Case %d: Bob\n",t);
         else printf("Case %d: Alice\n",t);


      }
      else {

      if(n%2)    printf("Case %d: Bob\n",t);
      else
        printf("Case %d: Alice\n",t);
}

  t++;


  }



}
